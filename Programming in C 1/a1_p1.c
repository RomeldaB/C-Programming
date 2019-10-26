/*
	JTSK-320111
	a1 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
	double result;
	result = (3.0 + 1.0) / 5.0;
	printf("The value of 4/5 is %lf\n", result);
	return 0;
}

/*
    At first the result is 0.000 because the values we had entered were integers, so the printed result would be zero.
	The result was a decimal number because we are asking the program to print a float.
	In order to get the right value we need to change the values from 3, 4 and 5 to 3.0, 1.0 and 5.0, so we need to make them decimal numbers. 
*/