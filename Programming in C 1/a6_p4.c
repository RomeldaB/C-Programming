/*
	JTSK-320111
	a6 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divby5(double array[], int n)
{
	int k;
	for(k=0; k<n; k++){
		array[k]=array[k]/5.0;
	}	
}

int main()
{
	int i, j, k;
	scanf("%i", &k);
	
	double *array;
	array = (double*)malloc(sizeof(double) * k);
	for(i=0; i<k; i++){
		scanf("%lf", &array[i]);
	}	
	
	printf("Initial array: ");
	for(j=0; j<k; j++){
		printf("%lf ", array[j]);
		
		if(j == k-1){
			printf("\n");
		}
	}
	
	divby5(array, k);
	printf("After dividing by 5: ");
	for(i=0; i<k; i++){
		printf("%lf ", array[i]);
		if(i == k-1){
			printf("\n");
		}
	}
	
	free(array);
	return 0;
}