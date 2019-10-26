/*
	JTSK-320111
	a4 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
float to_pounds(int kg, int g)
{
    float pound;
    pound = (int)kg*2.2 + (int)g*0.001*2.2;
    return pound;
}

int main()
{
    int kg, g;
    scanf("%d", &kg);
    scanf("%d", &g);
    printf("Result of conversion: %f\n", to_pounds(kg, g));
    return 0;
}