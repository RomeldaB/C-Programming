/*
	JTSK-320111
	a5 p12.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replaceAll(char *str, char c, char e)
{
	int k;
	for(k = 0; k<strlen(str); k++){
		if(str[k] == c){
			str[k] = e;
		}
	}
}

int main()
{
	char string[80], c1, c2;
	while(1){
		fgets(string, sizeof(string), stdin);
		string[strlen(string)-1] = '\0';
		
		if(strcmp(string, "stop") == 0){
			break;
		}
		
		scanf("%c", &c1);
		getchar();
		scanf("%c", &c2);
		
		printf("%c changed to %c\n", c1, c2);
		printf("Initial string: %s\n", string);
		
		replaceAll(string, c1, c2);
		printf("Actual string: %s\n", string);
		getchar();
	}
	return 0;
}