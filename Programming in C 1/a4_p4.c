/*
	JTSK-320111
	a4 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c); 

int main()
{
	int n, m;
	char c;
	scanf("%i", &n);
	scanf("%i", &m);
	getchar();
	scanf("%c", &c);
	print_form(n,m,c);
 	
 	
	return 0;
}

void print_form(int n, int m, char c)
{
	
	int i,j;

	for(i=m; i<=m+n-1;i++){
		for(j=0;j<i; j++){
			printf("%c", c);
		}
	printf("\n");	
	}		
} 