/*
	JTSK-320111
	a5 p11.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_insensitive(char *str, char c)
{
	int n, count=0;
	for(n=0; n<strlen(str); n++){
		if(tolower(c) == tolower(str[n])){
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	char *string1, *string2;
	
	string1 = (char*) malloc(sizeof(char) * 50);
	fgets(string1, 50, stdin);
	string1[strlen(string1)] = '\0';
	
	string2 = (char*) malloc(sizeof(char) * strlen(string1));
	for(n=0; n<strlen(string1); n++){
		string2[n] = string1[n];
	}
	
	free(string1);
	
	printf("The character '%c' occurs %d times.\n", 'b', count_insensitive(string2, 'b'));
	printf("The character '%c' occurs %d times.\n", 'H', count_insensitive(string2, 'H'));
	printf("The character '%c' occurs %d times.\n", '8', count_insensitive(string2, '8'));
	printf("The character '%c' occurs %d times.\n", 'u', count_insensitive(string2, 'u'));
	printf("The character '%c' occurs %d times.\n", '$', count_insensitive(string2, '$'));
	
	free(string2);
		
	return 0;
}