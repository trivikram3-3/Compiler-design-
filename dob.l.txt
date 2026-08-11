%{
#include <stdio.h>
#include <stdlib.h>
%}

%%
(0[1-9]|[12][0-9]|3[01])[\/\-](0[1-9]|1[0-2])[\/\-](19|20)[0-9]{2}{
   printf("Invalid Data of Birth: %s\n", yytext);
}

[0-9]{1,2}[\/\-][0-9]{1,2}[\/\-][0-9]{1,4}{
   printf("Invalid Dta of Birth: %s (check day, month, or year format)\n", yytext);
   
}

[ \t\n]+     ; /* Ignore whitespace and newlines */
.            : /* Ignore any other character */
%%
int yywrap(){
	return 1;
}
int main(){
	printf("Enter Dta of Birth (DD/MM/YYYY or DD-MM-YYYY):\n");
	yylex();
	return 0;
}