/*
	JTSK-320111
	a6 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_lower(char* str)
{
	int i, j, count = 0;
	for(i=0; i<strlen(str); i++){
		j = (int)str[i];
		if(j>=97 && j<=122){
			count++;
		}
	}
	return count;
}

int main()
{
	char string[50];
	while(1){
		fgets(string, sizeof(string), stdin);
		string[strlen(string)-1] = '\0';
		
		if(string[0] == '\0'){
			break;
		}
		printf("There are %d lowercase characters in the string.\n", count_lower(string));
	}
	return 0;
}