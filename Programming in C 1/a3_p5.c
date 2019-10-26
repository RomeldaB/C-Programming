 /*
	JTSK-320111
	a3 p5.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
int main()
{
	int n;
    scanf("%i", &n);
    for ( ; n<1 ; ){
    	printf("Input is invalid, reenter value\n");
        scanf("%i", &n);
    }

    int h;
    h = 48;

    int d=1;
    printf("1 day = 24 hours\n");

    for(d=1; d<=(n-1); d++)
    {
        printf("%i days = %i hours\n", (d+1), h);
        h += 24 ;
    }
	return 0;
}
