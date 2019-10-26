/*
	JTSK-320111
	a4 p6.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n)
{
	double sum;
		if(n>5){
			sum= v[2]+v[5];		
		}
		else{
			sum=-111;
		}
	return sum;
}

int main()
{
	int n;
	scanf("%i", &n);
	double array[n];
	int i=0;
	
	while(i<n){
		scanf("%lf", &array[i]);
		i++;
	}
	
	if(n>5){
		printf("sum=%lf\n", sum25(array, n));
	}
	else{
		printf("One or both positions are invalid\n");
	}
	return 0;
}