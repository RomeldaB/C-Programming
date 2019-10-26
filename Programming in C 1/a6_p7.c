/*
	JTSK-320111
	a6 p7.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

int prime(int p, int q)
{
	if(q==1){
		return 1;
	}	
	else if(q<1){
		return 0;
	}
	else{
		if(p%q==0){
			return 0;
		}
		else{
			prime(p, q-1);
		}
	}
	return 1;
}

int main()
{
	int x;
	scanf("%i", &x);

	if(prime(x, x/2)){
		printf("%i is prime\n", x);
	}
	else{
		printf("%i is not prime\n", x);
	}
	
	return 0;
}