%{
#include <stdio.h>
#include <stdlib.h>
%}

%%
^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$ { printf("valid email ID\n"); exit(0); }
\n                                               { /* ignore newline */ }
.                                                { printf("invalid email ID\n"); exit(0); }
%%

int yywrap()
{ 
   return 0;
}
int main()
{
       printf("enter an email ID: ");
       yylex();
       return 0;
}