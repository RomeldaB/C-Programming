/*
	JTSK-320111
	a4 p7.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b)
{
	float p;
	p=a*b;
	return p;
}

void productbyref(float a, float b, float *p)
{
	*p = a*b;
}

void modifybyref(float *a, float *b)
{
	*a+=3;
	*b+=11;
}

int main()
{
	float x, y;
	float m;

	printf("Enter two float values: \n");
	scanf("%f", &x);
	scanf("%f", &y);

	printf("Product = %f\n", product(x,y));
	productbyref(x, y, &m);	

	printf("Product by reference = %f\n", m);
	modifybyref(&x, &y);

	printf("Numbers are now: x=%f, y=%f\n", x, y);
return 0;
}