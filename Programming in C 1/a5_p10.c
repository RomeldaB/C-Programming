 /*
	JTSK-320111
	a5 p10.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
	*prod = a*b;
	*div = a/b;
	*pwr = pow(a, b);
	*invb = 1/b;
}

int main()
{
	float a, b, prod, div, pwr, invb;
	scanf("%f", &a);
	scanf("%f", &b);
	
	proddivpowinv(a, b, &prod, &div, &pwr, &invb);
	
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("Product = %f\n", prod);
	printf("Division = %f\n", div);
	printf("a to the power of b = %f\n", pwr);
	printf("Inverse of b = %f\n", invb);	
	
	return 0;
}