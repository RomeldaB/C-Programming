/*
	JTSK-320111
	a5 p9.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n)
{
	int min, max, k=0;
	min = arr[0];
	max = arr[1];
	
	for(k=0; k<n; k++){
		if(arr[k]>max){
			max = arr[k];
		}
		if(arr[k]<min){
			max = arr[k];
		}
	}
	return min*max;
}

int main()
{
	int i, d;
	scanf("%i", &d);
	int *arr;
	
	arr = (int*) malloc(sizeof(int) * d);
	if(arr == NULL){
		exit(1);
	}
	
	for(i=0; i<d; i++){
		scanf("%i", &arr[i]);
	}
	
	printf("Biggest nr. x Smallest nr. = %i\n", prodminmax(arr, d));
	free(arr);
	
	return 0;
}