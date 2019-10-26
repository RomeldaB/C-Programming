/*
	JTSK-320111
	a5 p6.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void gr_values(int array[], int k)
{
	if(k<2){
		printf("You should enter a value greater than 2!\n");
		return;
	}
	int h1, h2, a, i;
	h1 = array[0];
	h2 = array[1];
	if(h1 < h2){
		a=h1;
		h1=h2;
		h2=a;
	}
	for(i=0; i<k; i++){
		if(array[i]>h1){
			h2 = h1;
			h1 = array[i];
		}
		else if(array[i]>h2){
			h2 = array[i];
		}
	}
	printf("The two greatest numbers are: %d and %d\n", h1, h2);
}

int main()
{
	int n, *array, i;
	printf("Dimension of array: ");
	scanf("%i", &n);
	
	array = (int*)malloc(sizeof(int) * n);
	if(array == NULL){
		exit(1);	
	}
	for(i=0; i<n; i++){
		printf("Enter a[%d]: ", i+1);
		scanf("%i", &array[i]);
	}
	
	gr_values(array, n);
	
	free(array);
	return 0;
}