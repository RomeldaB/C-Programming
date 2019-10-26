/*
	JTSK-320111
	a6 p10.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *f1, *f2, *f3;
	f1 = fopen("text1.txt", "r");
	f2 = fopen("text2.txt", "r");
	f3 = fopen("merge12.txt", "w");
	
	if(f1 == NULL || f2 == NULL || f3 == NULL){
		printf("Cannot open file!\n");
		exit(1);
	}
	
	while((ch = fgetc(f1)) != EOF){
		fputc(ch, f3);
	}
	
	fputc('\n', f3);
	
	while((ch = fgetc(f2)) != EOF){
		fputc(ch, f3);
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	return 0;
}