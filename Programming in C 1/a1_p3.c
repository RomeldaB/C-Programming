/*
JTSK-320111
a1 p4.c
Romelda Blaceri
rblaceri@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float division;
    int x,y;
    int sum, product, difference, remainder;
    x = 17;
    y = 4;

    sum = x + y;
    product = x * y;
    difference = x - y;
    remainder = x % y;
    float x1, y1;
    x1=17.0;
    y1=4.0;
    division = x1 / y1;

    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%f\n", division);
    printf("remainder of division=%d\n", remainder);
    return 0;
}