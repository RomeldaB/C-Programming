/*
	JTSK-320111
	a6 p6.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

void recursion(int r)
{
	if(r==1){
		printf("1");
	}
	else{
		printf("%i, ", r);
		recursion(r-1);
	}
}

int main()
{
	int n;
	scanf("%i", &n);
	recursion(n);
	return 0;
}