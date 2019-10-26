/*
	JTSK-320112
	a1 p5.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#define LSB(x) x&1

// function for counting the total bits in a number
unsigned int countBits(unsigned int n) 
{ 
   unsigned int count = 0; 
   while(n) 
   { 
        count++; 
        n >>= 1; 
    } 
    return count; 
} 

int main() 
{
	int i, reverse;
    unsigned char ch;
	scanf("%c", &ch);  
    printf("The decimal representation is: %d\n", ch);
	printf("The backwards binary representation is: ");
	// the loop prints the last bit of the number and then the number 
	// is shifted to the right until it is printed backwards
	for(i=0; i<countBits(ch); i++){
		reverse = ch >> i;
		printf("%d", LSB(reverse));	
	}
	printf("\n");
	return 0;
}