#pragma once

#include <stdlib.h>
#include <stdio.h>
#include "parser.tab.h"

extern int yyparse();
extern FILE* yyin;

