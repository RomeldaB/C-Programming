/*
	JTSK-320111
	a2 p6.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);

    int *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    
    printf("ptr_one=%p\n", ptr_one );
    printf("ptr_two=%p\n", ptr_two );
    printf("ptr_three=%p\n", ptr_three );
    printf("=> ptr_one = ptr_two");

    return 0;
}