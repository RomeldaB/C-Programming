/*
	JTSK-320111
	a3 p6.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
 	float x;
 	int n;
 	scanf("%f", &x);
 	scanf("%i", &n);
 	
 	for ( ; n<1 ; ){
    	printf("Input is invalid, reenter value\n");
        scanf("%i", &n);
    }
    
    int a=0;
    while(a<n){
		printf("%f\n", x);
		a++;
	}
	
	return 0;
}
	 