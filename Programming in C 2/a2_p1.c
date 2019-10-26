/*
	JTSK-320112
	a2 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n); // getting the size of the array
	float array[n];
	float *p = array;
	for(i=0; i<n; i++){
		scanf("%f", &array[i]); // getting the elements of the array
	}
	while(*p>=0){
		p++; // we basically count the positive elements (until a negative comes out)
	}
	// the difference between the actual pointer position and the intial one gives
	// the number of elements before the array
	printf("Before the first negative value: %ld elements\n", p-array);
	return 0;
}