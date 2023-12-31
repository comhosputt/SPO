%option yylineno

D [0-9]
L [a-zA-Z_]
H [a-fA-F0-9]
E ([Ee][+-]?{D}+)
P ([Pp][+-]?{D}+)
FS (f|F|l|L)
IS ((u|U)|(u|U)?(l|L|ll|LL)|(l|L|ll|LL)(u|U))

%{
#include <stdlib.h>
#include <stdio.h>
#include "util.h"
#include "ast.h"
#include "parser.tab.h"

void count(void);
void comment(void);
%}

%%
"/*" { comment(); }
"//"[^\n]* { /* consume //-comment */ }


"var" { count(); return(VAR); }
"then" { count(); return(THEN); }
"begin" { count(); return(T_BEGIN); }
"end" { count(); return(T_END); }
"of" { count(); return(OF); }
"array" { count(); return(ARRAY); }
"repeat" { count(); return(REPEAT); }
"until" { count(); return(UNTIL); }
"auto" { count(); return(AUTO); }
"bool" { count(); return(BOOL); }
"byte" { count(); return(BYTE); }
"break" { yylval.node = createNode("BREAK", NULL, NULL, ""); return(BREAK); }
"case" { count(); return(CASE); }
"char" { count(); return(CHAR); }
"_Complex" { count(); return(COMPLEX); }
"const" { count(); return(CONST); }
"continue" { count(); return(CONTINUE); }
"default" { count(); return(DEFAULT); }
"do" { count(); return(DO); }
"double" { count(); return(DOUBLE); }
"else" { count(); return(ELSE); }
"enum" { count(); return(ENUM); }
"extern" { count(); return(EXTERN); }
"method" { count(); return(METHOD); }
"float" { count(); return(FLOAT); }
"for" { count(); return(FOR); }
"goto" { count(); return(GOTO); }
"if" { count(); return(IF); }
"_Imaginary" { count(); return(IMAGINARY); }
"inline" { count(); return(INLINE); }
"int" { count(); return(INT); }
"long" { count(); return(LONG); }
"register" { count(); return(REGISTER); }
"restrict" { count(); return(RESTRICT); }
"return" { count(); return(RETURN); }
"short" { count(); return(SHORT); }
"signed" { count(); return(SIGNED); }
"sizeof" { count(); return(SIZEOF); }
"static" { count(); return(STATIC); }
"struct" { count(); return(STRUCT); }
"switch"		{ count(); return(SWITCH); }
"typedef"		{ count(); return(TYPEDEF); }
"union"			{ count(); return(UNION); }
"unsigned"		{ count(); return(UNSIGNED); }
"uint"		{ count(); return(UINT); }
"ulong"		{ count(); return(ULONG); }
"void"			{ count(); return(VOID); }
"volatile"		{ count(); return(VOLATILE); }
"while" { count(); return(WHILE); }

{L}({L}|{D})* { count(); return(IDENTIFIER); }

0[xX]{H}+{IS}? { count(); return(CONSTANT); }
0[0-7]*{IS}? { count(); return(CONSTANT); }
[1-9]{D}*{IS}? { count(); return(CONSTANT); }
L?'(\\.|[^\\'\n])+' { count(); return(CONSTANT); }

{D}+{E}{FS}? { count(); return(CONSTANT); }
{D}*"."{D}+{E}?{FS}? { count(); return(CONSTANT); }
{D}+"."{D}*{E}?{FS}? { count(); return(CONSTANT); }
0[xX]{H}+{P}{FS}? { count(); return(CONSTANT); }
0[xX]{H}*"."{H}+{P}?{FS}? { count(); return(CONSTANT); }
0[xX]{H}+"."{H}*{P}?{FS}? { count(); return(CONSTANT); }


L?\"(\\.|[^\\"\n])*\" { count(); return(STRING_LITERAL); }

"..." { count(); return(ELLIPSIS); }
">>=" { count(); return(RIGHT_ASSIGN); }
"<<=" { count(); return(LEFT_ASSIGN); }
"+=" { count(); return(ADD_ASSIGN); }
"-=" { count(); return(SUB_ASSIGN); }
"*=" { count(); return(MUL_ASSIGN); }
"/=" { count(); return(DIV_ASSIGN); }
"%=" { count(); return(MOD_ASSIGN); }
"&=" { count(); return(AND_ASSIGN); }
"^=" { count(); return(XOR_ASSIGN); }
"|=" { count(); return(OR_ASSIGN); }
">>" { count(); return(RIGHT_OP); }
"<<" { count(); return(LEFT_OP); }
"++" { count(); return(INC_OP); }
"--" { count(); return(DEC_OP); }
"->" { count(); return(PTR_OP); }
"&&" { count(); return(AND_OP); }
"||" { count(); return(OR_OP); }
"<=" { count(); return(LE_OP); }
">=" { count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"			{ count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }

[ \t\v\n\f]		{ count(); }
.			{ /* Add code to complain about unmatched characters */ }

%%



int yywrap(void)
{
	return 1;
}


void comment(void)
{
	char c, prev = 0;
  
	while ((c = input()) != 0) /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
 prev = c;
	}
	//error("unterminated comment");
}


int column = 0;
char tokenBuff[1024];

void count(void)
{
	int i;

	strcpy(tokenBuff, yytext);
	yylval.text = tokenBuff;

	// printf("[%d] %s \n", yylineno, yytext);

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
 column = 0;
		else if (yytext[i] == '\t')
 column += 8 - (column % 8);
		else
 column++;

 ECHO;
}


int check_type(void)
{
/*
* pseudo code --- this is what it should check
*
* if (yytext == type_name)
* return TYPE_NAME;
*
* return IDENTIFIER;
*/

/*
* it actually will only return IDENTIFIER
*/

	return IDENTIFIER;
}