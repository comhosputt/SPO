%{
#pragma once 
#include "parser.tab.h"
#include "ast.h"
#include "util.h"

int yylex(void);
void yyerror(char* s);

%}
%error-verbose

%union {
    struct ASTNode* node;
	char* text;
}



%token <text> IDENTIFIER CONSTANT STRING_LITERAL 
%token <node> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP SIZEOF
%token <node> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <node> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN OF ARRAY THEN VAR
%token <node> XOR_ASSIGN OR_ASSIGN TYPE_NAME METHOD REPEAT UNTIL T_BEGIN T_END

%token <node> TYPEDEF EXTERN STATIC AUTO REGISTER INLINE RESTRICT
%token <node> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <node> BOOL COMPLEX IMAGINARY STRING UINT ULONG BYTE
%token <node> STRUCT UNION ENUM ELLIPSIS

%token <node> CASE DEFAULT IF         ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <node> varNames varsSpec varsSpecs
%type <node> primary_expression
%type <node> postfix_expression
%type <node> argument_expression_list
%type <node> unary_expression
%type <node> unary_operator
%type <node> multiplicative_expression
%type <node> additive_expression
%type <node> shift_expression
%type <node> relational_expression
%type <node> equality_expression
%type <node> expression
%type <node> and_expression
%type <node> exclusive_or_expression
%type <node> inclusive_or_expression
%type <node> logical_and_expression
%type <node> logical_or_expression
%type <node> assignment_expression
%type <node> type_atom
%type <node> type_ref
%type <node> statement
%type <node> compound_statement
%type <node> block_item_list
%type <node> expression_statement
%type <node> selection_statement
%type <node> iteration_statement
%type <node> repeat_kind
%type <node> jump_statement
%type <node> translation_unit
%type <node> source_item
%type <node> function_definition
%type <node> arglistSpec
%type <node> arglistSpecItem
%type <node> fname


%start translation_unit


%%

primary_expression  : IDENTIFIER {$$ = createNode("IDENTIFIER", NULL,NULL, $1);}
 | CONSTANT {$$ = createNode("CONSTANT", NULL,NULL, $1);} 
 | STRING_LITERAL {$$ = createNode("STRING_LITERAL", NULL,NULL, $1);}
 | '(' expression ')' {$$ = $2; }
 ;

postfix_expression
 : primary_expression {$$ = $1;}
 | postfix_expression '[' expression ']' {$$ = createNode("postfix_expression", $1, $3, "");}
 | postfix_expression '(' ')' {$$ = createNode("postfix_expression", $1, NULL, ""); }
 | postfix_expression '(' argument_expression_list ')' {$$ = createNode("postfix_expression", $1, $3, "");}
	;

argument_expression_list
 : assignment_expression {$$ = createNode("argument_expression_list", $1, NULL, "");}
 | argument_expression_list ',' assignment_expression {$$ = createNode("argument_expression_list", $1, $3, "");}
	;

unary_expression
	: postfix_expression {$$ = $1;}
	| unary_operator primary_expression {$$ = createNode("unary_expression", $1, $2, "");}
	;

unary_operator
	: '&' {$$ = NULL}
	| '*' {$$ = NULL}
	| '+' {$$ = NULL}
	| '-' {$$ = NULL}
	| '~' {$$ = NULL}
	| '!' {$$ = NULL}
	;

multiplicative_expression
	: unary_expression {$$ = $1;}
	| multiplicative_expression '*' unary_expression {$$ = createNode("'*'", $1, $3, "");}
	| multiplicative_expression '/' unary_expression {$$ = createNode("'/'", $1, $3, "");}
	| multiplicative_expression '%' unary_expression {$$ = createNode("'%'", $1, $3, "");}
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression {$$ = createNode("'+'", $1, $3, "");}
	| additive_expression '-' multiplicative_expression {$$ = createNode("'-'", $1, $3, "");}
	;

shift_expression
	: additive_expression {$$ = $1;}
	| shift_expression LEFT_OP additive_expression {$$ = createNode("LEFT_OP", $1, $3, "");}
	| shift_expression RIGHT_OP additive_expression {$$ = createNode("RIGHT_OP", $1, $3, "");}
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression '<' shift_expression {$$ = createNode("'<'", $1, $3, "");}
	| relational_expression '>' shift_expression {$$ = createNode("'>'", $1, $3, "");}
	| relational_expression LE_OP shift_expression {$$ = createNode("LE_OP", $1, $3, "");}
	| relational_expression GE_OP shift_expression {$$ = createNode("GE_OP", $1, $3, "");}
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression {$$ = createNode("EQ_OP", $1, $3, "");}
	| equality_expression NE_OP relational_expression {$$ = createNode("NE_OP", $1, $3, "");}
	;

and_expression
	: equality_expression {$$ = $1;}
	| and_expression '&' equality_expression {$$ = createNode("'&'", $1, $3, "");}
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	| exclusive_or_expression '^' and_expression {$$ = createNode("'^'", $1, $3, "");}
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression {$$ = createNode("'|'", $1, $3, "");}
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression {$$ = createNode("AND_OP", $1, $3, "");}
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression {$$ = createNode("OR_OP", $1, $3, "");}
	;

assignment_expression
	: logical_or_expression {$$ = $1;}
	| unary_expression '=' assignment_expression {$$ = createNode("assignment_expression", $1, $3, "");}
	;




expression
	: assignment_expression { $$ = $1; } ;


type_atom
	: BOOL {$$ = createNode("BOOL", NULL,NULL, "");}
	| BYTE {$$ = createNode("BYTE", NULL,NULL, "");}
	| UINT {$$ = createNode("UINT", NULL,NULL, "");}
	| INT {$$ = createNode("INT", NULL,NULL, "");}
	| LONG {$$ = createNode("LONG", NULL,NULL, "");}
	| ULONG {$$ = createNode("ULONG", NULL,NULL, "");}
	| CHAR {$$ = createNode("CHAR", NULL,NULL, "");}
	| STRING {$$ = createNode("STRING", NULL,NULL, "");}
	| IDENTIFIER {$$ = createNode("IDENTIFIER", NULL,NULL, "");}
	;

type_ref
	: type_atom 
	| ARRAY '[' ']' OF type_ref {$$ = createNode("type_ref", $5,NULL, "");}
	;

statement
	: compound_statement {$$ =  $1;}
	| expression_statement {$$ =  $1;}
	| selection_statement {$$ =  $1;}
	| iteration_statement {$$ =  $1;}
	| jump_statement {$$ =  $1;}
	;

compound_statement
	: T_BEGIN T_END ';'
	| T_BEGIN block_item_list T_END ';' {$$ = createNode("compound_statement", $2,NULL, "");}
	;

block_item_list
	: statement {$$ =  $1;}
	| block_item_list statement {$$ = createNode("block_item_list", $1, $2, "");}
	;

expression_statement
	: ';' {$$ = NULL}
	| expression ';' {$$ = createNode("expression_statement", $1, NULL, "");}
	;

selection_statement
	: IF expression THEN statement %prec P_THEN {$$ = createNode("if_statement", $2, $4, "");}
	| IF expression THEN statement ELSE statement {$$ = createNode("if_statement", $2, createNode("else", $4, $6, ""), "");}
	;

iteration_statement
	: WHILE expression DO statement {$$ = createNode("while", $2, $4, "");}
	| REPEAT statement repeat_kind expression ';' {$$ = createNode("iteration_statement", createNode("repeat", $2, NULL, ""), $4, "");}
	;

repeat_kind
	:WHILE {$$ = createNode("while", $1, NULL, "");}
	|UNTIL {$$ = createNode("until", $1, NULL, "");}
	; 

jump_statement
	: BREAK ';' {$$ = createNode("BREAK", NULL, NULL, "");}
	| RETURN ';' {$$ = createNode("RETURN", $1, NULL, "");}
	| RETURN expression ';' {$$ = createNode("RETURN", $1, NULL, "");}
	;

translation_unit
	: source_item {$$ =  $1;}
	| translation_unit source_item {$$ = createNode("translation_unit", $1, $2, "");}
	;

source_item: function_definition {$$ =  $1;};

fname: IDENTIFIER {$$ = createNode("fname", NULL, NULL, $1);}

varNames
	: IDENTIFIER				{$$ = createNode("vname", NULL, NULL, $1);}
	| varNames ',' IDENTIFIER	{$$ = createNode("vname", $1, NULL, $3);}
	;

varsSpec
	: varNames ';'							{$$ = createNode("varsSpec", NULL, createNode("varsSpec", $1, NULL, ""), "");}
	| varNames ':' type_ref	';'				{$$ = createNode("varsSpec", NULL, createNode("varsSpec", $1, $3, ""), "");}
	| varsSpec varNames	';'					{$$ = createNode("varsSpec", $1, createNode("varsSpec", $2, NULL, ""), "");}
	| varsSpec varNames ':' type_ref ';'	{$$ = createNode("varsSpec", $1, createNode("varsSpec", $2, $4, ""), "");}
	;

varsSpecs: VAR varsSpec { $$ = $2 };

function_definition
	:  METHOD fname '(' ')' compound_statement {$$ = createNode("function_definition", createNode("signature", $2, NULL, ""), $5, "");}
	|  METHOD fname '(' ')' ':' type_ref compound_statement {$$ = createNode("function_definition", createNode("signature", $2, createNode("types", NULL, $6, ""), ""), $7, "");}
	|  METHOD fname '(' arglistSpec ')' compound_statement {$$ = createNode("function_definition", createNode("signature", $2, createNode("types", $4, NULL, ""), ""), $6, "");}
	|  METHOD fname '(' arglistSpec ')' ':' type_ref compound_statement {$$ = createNode("function_definition", createNode("signature", $2, createNode("types", $4, $7, ""), ""), $8, "");}
	|  METHOD fname '(' ')' varsSpecs compound_statement {$$ = createNode("function_definition", createNode("signature1", $2, NULL, ""), createNode("body", $5, $6, ""), "");}
	|  METHOD fname '(' ')' ':' type_ref varsSpecs compound_statement {$$ = createNode("function_definition", createNode("signature2", $2, createNode("types", NULL, $6, ""), ""), createNode("body", $7, $8, ""), "");}
	|  METHOD fname '(' arglistSpec ')' varsSpecs compound_statement {$$ = createNode("function_definition", createNode("signature3", $2, createNode("types", $4, NULL, ""), ""), createNode("body", $6, $7, ""), "");}
	|  METHOD fname '(' arglistSpec ')' ':' type_ref varsSpecs compound_statement {$$ = createNode("function_definition", createNode("signature4", $2, createNode("types", $4, $7, ""), ""), createNode("body", $8, $9, ""), "");}
	;

arglistSpec
	: arglistSpecItem {$$ = $1;}
	| arglistSpec ',' arglistSpecItem {$$ = createNode("arglistSpec", $1, $3, "");}
	;

arglistSpecItem: IDENTIFIER {$$ = $1;}
			   | IDENTIFIER ':' type_ref {$$ = createNode("arglistSpecItem", $3,NULL, "");};

%%
