/*
	JTSK-320111
	a6 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr[], int size);

int main()
{
	int k=0, d=0;
	float arr[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
	printf("Before:\n");
	while (k<=5){
		printf("%.3f", arr[k]);
		printf(" ");
		k++;
	}
	
	divby5(arr, 6);
	printf("\nAfter:\n");
		for(d=0; d<6; d++){
			printf("%.3f", arr[d]);
			printf(" ");
			if (d==5){
				printf("\n");
			}	
		}
	return 0;	
}

void divby5(float arr[], int size)
{
	int n;
	for(n=0; n<=size; n++){
		arr[n]=arr[n]/5.0;
	}
}
