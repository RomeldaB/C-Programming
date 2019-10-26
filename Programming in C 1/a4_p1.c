/*
	JTSK-320111
	a4 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
	int idx;
	/* Loop until end of string */
	for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){}
	/* do nothing */
	return idx+1;
}

int main() 
{
	char line[80];
	while (1)
	{
		printf("Enter string:\n");
		fgets(line, sizeof(line), stdin);
		printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
	}
}

/*
	It always prints zero, because we have forgotten to add the brackets {} after the for loop.
	In order to print the right position of g, we should also add 1 to idx,
	because initially the program counts the characters from zero.
*/