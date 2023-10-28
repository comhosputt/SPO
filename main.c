#include <stdint.h>
#include <stdio.h>

#include "main.h"
#include "ast.h"
#include "util.h"

extern ASTNode** allNodes;
extern uint64_t allNodesCount;

void yyerror(char* s)
{
    printf("%s\n", s);
}

void writeTree(char* outFileName)
{
    // open out file for write
    
    printf("<Node Id=\"%d\" Label=\"%s\" / >\n", 4, "hello");


}

int main(int argc, char* argv[]) {
    allNodes = malloc(1024 * 8 * sizeof(ASTNode*));
    allNodesCount = 0;
    FILE* input_file = fopen(argv[1], "r");
    if (input_file) {
        yyin = input_file;
        yyparse();
        fclose(input_file);
        printAST();
    }
    else {
        printf("Не удалось открыть файл");
    }
    return 0;
}