 /*
	JTSK-320111
	a3 p7.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
 	char ch;
 	int n;

 	printf("Enter a lowercase character: ");
 	scanf ("%c", &ch);
 	printf("Enter an integer: ");
 	scanf("%i", &n);

 	int a=0;
 	while(a<=n){
 		printf("%c\n", ch-a);
		a++;
	}	
 	
 	return 0;
}