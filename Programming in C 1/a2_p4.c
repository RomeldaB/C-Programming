/*
	JTSK-320111
	a2 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, h, square, rectangle, triangle, trapezoid;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    
    square = a*a;
    rectangle = a*b;
    triangle = (a*h)/2;
    trapezoid = (a+b)*h/2;
    
    printf("square area=%f\n", square);
    printf("rectangle area=%f\n", rectangle);
    printf("triangle area=%f\n", triangle);
    printf("trapezoid area=%f\n", trapezoid);
    return 0;
}