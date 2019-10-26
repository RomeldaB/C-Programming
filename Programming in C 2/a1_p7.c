/*
	JTSK-320112
	a1 p7.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#define LSB(x) x&1

void set3bits(unsigned char *ch, int m, int n, int k)
{
	// turning on bit 1 (making the m, n, and k-th bits =1)
	// Note: char must be initialized as pointer in order 
	// for the bits to change to 1
	*ch |= (1<<m);
	*ch |= (1<<n);
	*ch |= (1<<k);
}

int main()
{
	int i, x, a, b, c;
    unsigned char ch;
	scanf("%c", &ch);
	// getting the positions of bits that are to be set to 1
	scanf("%d%d%d", &a, &b, &c); 
    printf("The decimal representation is: %d\n", ch);
	printf("The binary representation is: ");
	// using same method as in the previous exercises to 
	// get the binary form
	for(i=7; i>=0; --i){
		x = ch >> i;
		printf("%d", LSB(x));	
	}
	printf("\n");
	// using function set3bits
	set3bits(&ch, a, b, c);
	printf("After setting the bits: ");
	for(i=7; i>=0; --i){
		x = ch >> i;
		printf("%d", LSB(x));	
	}
	printf("\n");
	return 0;
}