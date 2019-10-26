 /*
	JTSK-320111
	a3 p8.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a lowercase character: ");
	scanf ("%c", &ch);
	int n;
	printf("Enter an integer: ");
	scanf("%i", &n);
	
	if((n<7 || n>32) || !(ch>=97 && ch<=122)){
	
		if(!(ch>=97 && ch<=122)){
			 printf("You haven't entered a lowercase character\n");
		 }
			 
		 if((n<7 || n>32)){
			printf("n is not between 7 and 32\n");
		 }
		return 1;
	}
	
	int a=0;
	while(a<=n){
		printf("%c\n", ch-a);
		a++;
	}	
	
return 0;
}