%{
#include <stdio.h>
#include <stdio.h>
%}

%%
[0-9]          { printf("it is a digit\n"); exit(0); }
.              { printf("not a digit\n"); exit(0); }
\n             {/* ignore newlines */}
%%

int yywrap()
{
    return 1;
}
 int main()
 {
   printf("enter: ");
   yylex();
   return 0;
}