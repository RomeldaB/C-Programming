/*
	JTSK-320111
	a2 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    
    printf("character=%c\n", ch);
    printf("decimal=%d\n", ch);
    printf("octal=%o\n", ch);
    printf("hexadecimal=%x\n", ch);
    return 0;
}