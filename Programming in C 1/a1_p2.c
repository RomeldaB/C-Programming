/*
	JTSK-320111
	a1 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

int main() 
{
	int result; /* The result of our calculation */
	result = (2 + 7) * 9 / 3;
	printf("The result is %d\n", result);
	return 0;
}

/*
	At first we get a wrong result, because since we hadn't specified what we wanted to be printed,
	the program printed a number that was previously stored in the memory. All we needed to do was to add
	"result" in the printf section, and therefore specify the result we wanted.
*/