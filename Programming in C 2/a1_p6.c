/*
	JTSK-320112
	a1 p6.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
// bit mask for finding the least significant bit
#define LSB(x) x&1

int main()
{
	int i, x;
    unsigned char ch;
	scanf("%c", &ch);  
    printf("The decimal representation is: %d\n", ch);
	printf("The binary representation is: ");
	// we start the loop from 7 to 0 as there are 
	// 8 bits needed to store an int
	for(i=7; i>=0; --i){
		// the loop basically starts to print the first bit of 
		// the binary represantation (ch >> 7 starts the loop with
		// 7 zeros and the first bit of our binary) as it is the
		// LSB of x. Then it continues using the same logic for all 8 bits.
		x = ch >> i;
		printf("%d", LSB(x));	
	}
	printf("\n");
	return 0;
}