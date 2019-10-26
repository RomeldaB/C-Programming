/*
	JTSK-320112
	a1 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#define SWAP(x, y, s) { s swap = x; x = y; y = swap; }

int main()
{
	int a, b;
	double c, d;
	scanf("%d\n%d", &a, &b);
	scanf("%lf\n%lf", &c, &d);
	
	SWAP(a, b, int);
	SWAP(c, d, double);
	
	printf("After swapping:\n");
	printf("%d\n%d\n%.6lf\n%.6lf\n", a, b, c, d);
	
	return 0;
}