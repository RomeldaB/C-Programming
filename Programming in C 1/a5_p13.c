/*
	JTSK-320111
	a5 p13.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void uppcase(char *str)
{
	int k;
	for(k=0; k<strlen(str); k++){
		if(str[k] >= 97 && str[k] <= 122){
			str[k] = toupper(str[k]);
		}
	}
}

void lowcase(char *str)
{
	int k;
	for(k=0; k<strlen(str); k++){
		if(str[k] >= 65 && str[k] <= 90){
			str[k] = tolower(str[k]);
		}
	}
}

int main()
{
	char string[90];
	while(1){
		fgets(string, sizeof(string), stdin);
		string[strlen(string)-1] = '\0';
		
		if(strcmp(string, "exit") == 0){
			break;
		}
		
		uppcase(string);
		printf("uppcase=%s\n", string);
		
		lowcase(string);
		printf("lowcase=%s\n", string);
	}	
	
	return 0;
}