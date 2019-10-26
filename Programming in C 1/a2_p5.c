/*
	JTSK-320111
	a2 p5.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);

    int *ptr_a;
    ptr_a = &a;
    printf("%p\n", ptr_a);
    
    *ptr_a += 5;
    
    printf("%d\n", *ptr_a);
    printf("%p", ptr_a);

    return 0;
}