/*
	JTSK-320111
	a2 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;
    double sum, difference, square;
    scanf("%lf", &x);
    scanf("%lf", &y);
    
    sum = x + y;
    difference = x - y;
    square = x*x;

    printf("sum of doubles=%lf\n", sum);
    printf("difference of doubles=%lf\n", difference);
    printf("square=%lf\n", square);

    int a, b;
    int sumofint, product;
    scanf("%d", &a);
    scanf("%d", &b);
    
    sumofint = a + b;
    product = a * b;
    
    printf("sum of integers=%d\n", sumofint);
    printf("product of integers=%d\n", product);

    char ch1, ch2;
    int sumofchars, productofchars;
    getchar();
    
    scanf("%c", &ch1);
    getchar();
    scanf("%c", &ch2);
    
    sumofchars = ch1 + ch2;
    productofchars = ch1 * ch2;
    
    printf("sum of chars=%d\n", sumofchars);
    printf("product of chars=%d\n", productofchars);
    printf("sum of chars=%c\n", sumofchars);
    printf("product of chars=%c\n", productofchars);

    return 0;
}