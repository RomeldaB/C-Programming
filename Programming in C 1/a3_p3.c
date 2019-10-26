/*
	JTSK-320111
	a3 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    scanf("%c", &c);
    int x = (int)c;
    
    if((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        printf("%c is a letter\n", c);

    }
    else if (x>=48 && x<=57)
    {
        printf("%c is a digit\n", c);
    }
    else
    {
        printf("%c is some other symbol\n", c);
    }
    return 0;
}