%{
#include <stdio.h>
int vowels = 0;
int consonants = 0;
%}

%%
[aeiouAEIOU]        {vowels++;}
[a-zA-Z]            {consonants++;}
\n                  {return 0;}
.                   {/*n ignore spaces, numbers, and punctuation */}
%%
int yywrap() {
	return 1;
}
int main() {
}
int main(){
	printf("enter a string:");
	yylex();
	printf("\ntotal vowels: %d\n", vowels);
	printf("total consonants: %d\n", consonants);
	return 0;
}
