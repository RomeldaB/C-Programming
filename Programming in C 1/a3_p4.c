/*
	JTSK-320111
	a3 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i", &n);
    while (n<1){
        scanf("%i", &n);
    }

    int h;
    h = 48;

    int d=1;
    printf("1 day = 24 hours\n");

    while(d<=(n-1))
    {
        printf("%i days = %i hours\n", (d+1), h);
        h += 24 ;
        d++;
    }

    return 0;
}