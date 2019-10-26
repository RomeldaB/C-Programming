/*
	JTSK-320111
	a6 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, char c); 

int main()
{
	int n;
	char c;
	
	scanf("%i", &n);
	getchar();
	
	scanf("%c", &c);
	print_form(n,c);
	return 0;
}

void print_form(int n, char c)
{
	int i,j;
	for(i=n; i>=1; i--){
		for(j=0; j<i; j++){
			printf("%c", c);
		}
		printf("\n");	
	}		
} 