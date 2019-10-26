/*
	JTSK-320112
	a5 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack s;
    s.count = 0;
    unsigned int n;
    // Getting the number we want to convert
    scanf("%d", &n);
    to_binary(&s,n);
    // Printing the binary representation
    printf("The binary representation of %d is ", n);
    while(s.count>0)
    {
        printf("%d", pop(&s));
    }
    printf(".\n");
    return 0;
}