/*
	JTSK-320111
	a5 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main() 
{
	char string[50];
	int i, j=0;
	fgets(string, sizeof(string), stdin);
	string[strlen(string)-1]='\0';
	for (i=0; i<strlen(string); i++){
		if(j%2==0){
			printf("%c\n", string[i]);
		}
		else{
			printf(" %c\n", string[i]);
		}
		j++;
	}
	return 0;
}