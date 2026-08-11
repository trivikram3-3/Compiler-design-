%{
#include <stdio.h>
#include <stdlib.h>
%}

%%
^[0-9]{10}$      { printf("valid 10 digit mobile number\n"); exit(0); }
\n               { /* ignore the newline completely */}
.                { printf("invalid mobile number\n"); exit(0); }
%%

int yywrap()
{
   return 1;
}

 int main()
 {
     printf("enter a mobile number: ");
     yylex();
     return 0;
}