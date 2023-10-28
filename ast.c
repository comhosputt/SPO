#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
#include "ast.h" 
#include <stdint.h> 
#define _CRT_SECURE_NO_WARNINGS 

ASTNode** allNodes;
uint64_t allNodesCount;

ASTNode* createNode(char* type, ASTNode* left, ASTNode* right, char* value) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = type;
    node->left = left;
    node->right = right;
    node->id = allNodesCount;
    char* buf = malloc((strlen(value) + 1) * sizeof(char));
    strcpy_s(buf, sizeof(buf), value);
    node->value = buf;
    allNodes[allNodesCount] = node;
    allNodesCount++;
    printf("created #%d %s (%d, %d) %s\n", node->id, type, (left ? left->id : -1), (right ? right->id : -1), value);
    return node;
}

void printNodeId(FILE* file, ASTNode* node) {
    fprintf(file, "<Node Id=\"%d\" Label=\"%s", node->id, node->type);
    if (strlen(node->value) > 0) {
        fprintf(file, ", Value: %s", node->value);
    }
    fprintf(file, "\"/>\n");
}

void printAST() {
    FILE* file = fopen("tree.dgml", "w+");
    fprintf(file, "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n");
    fprintf(file, "<DirectedGraph xmlns=\"http://schemas.microsoft.com/vs/2009/dgml\">\n");
    fprintf(file, "<Nodes>\n");
    for (int i = 0; i < allNodesCount; ++i) {
        //allNodes[i]->id = i;
        printNodeId(file, allNodes[i]);
    }
    fprintf(file, "</Nodes>\n");
    fprintf(file, "<Links>\n");
    // Print all links after all nodes are printed
    for (int i = 0; i < allNodesCount; ++i) {
        if (allNodes[i]->left) {
            fprintf(file, "<Link Source=\"%d\" Target=\"%d\"/>\n", allNodes[i]->id, allNodes[i]->left->id);
        }
        if (allNodes[i]->right) {
            fprintf(file, "<Link Source=\"%d\" Target=\"%d\"/>\n", allNodes[i]->id, allNodes[i]->right->id);
        }
    }
    fprintf(file, "</Links>\n");
    fprintf(file, "</DirectedGraph>");
    fclose(file);
}