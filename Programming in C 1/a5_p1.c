/*
	JTSK-320111
	a5 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float lower_limit, upper_limit, step_size, i;

	scanf ("%f", &lower_limit);
	scanf ("%f", &upper_limit);
	scanf ("%f", &step_size);

	for(i=lower_limit; i<=upper_limit; i+=step_size){
		printf("%f %f %f\n", i, i*i*M_PI, 2*M_PI*i);
	}
	return 0;
}