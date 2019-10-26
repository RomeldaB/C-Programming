/*
	JTSK-320112
	a1 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#define LSB(x) x&1 // x&1(bitwise AND) returns 1 if LSB is 1, and 0 if it's 0

int main()
{
	unsigned char ch;
	scanf("%c", &ch);
	
	// In order to print the decimal represantation we use %d instead of %c
	printf("The decimal representation is: %d\n", ch);
	// Applying the macro, we get the least significant bit
	printf("The least significant bit is: %d\n", LSB(ch));
	
	return 0;
}