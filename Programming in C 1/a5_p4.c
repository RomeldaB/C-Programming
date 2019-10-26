/*
	JTSK-320111
	a5 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]);

int main()
{
	char s[50];
	
	while (1){
		fgets(s, sizeof(s), stdin);
		if(s[0]=='\n'){
			break;
		}
		printf("Number of consonants=%i\n", count_consonants(s));		
	}	
	return 0;
}

int count_consonants(char str[])
{
	int counter_v=0, counter_t=0, i;
	for(i=0; i<strlen(str); i++){
		switch (str[i]){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			case 'y':
			case 'Y':
				counter_v++;
				break;	
		}
		if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
			counter_t++;
		}
	}	
	return (counter_t - counter_v);
}