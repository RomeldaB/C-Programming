/*
	JTSK-320111
	a4 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm)
{
    float km;
    km = (float)cm/100000;
    return km;
}

int main()
{
    int cm;
    scanf("%d", &cm);
    printf("Result of conversion: %f\n", convert(cm));
    return 0;
}