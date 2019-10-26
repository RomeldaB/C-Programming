/*
	JTSK-320111
	a6 p8.c/
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f1, *f2;
	char c1, c2;
	f1 = fopen("chars.txt", "r");
	if(f1 == NULL){
		printf("Can't open file!\n");
		exit(1);
	}
	
	f2 = fopen("codesum.txt", "w");
	if(f2 == NULL){
		printf("Can't open file!\n");
		exit(1);
	}
	
	c1 = getc(f1);
	c2 = getc(f1);
	fprintf(f2, "%i", (int)c1 + (int)c2);
	
	fclose(f1);
	fclose(f2);
		
	return 0;
}