/*
	JTSK-320112
	a4 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Compare numbers for ascending order
int my_compare_asc(const void *va, const void *vb){
	const int* a = (const int*) va;
	const int* b = (const int*) vb;
	if(*a < *b) return -1;
	else if(*a > *b) return 1;
	else return 0;
}

// Compare numbers for descending order
int my_compare_dsc(const void *va, const void *vb){
	const int* a = (const int*) va;
	const int* b = (const int*) vb;
	if(*a > *b) return -1;
	else if(*a < *b) return 1;
	else return 0;
}

// Function pointer
int (*func) (const void *va, const void *vb);

// Function for printing the sorted list
void print(int * arr, int n, int (*func)(const void *va, const void *vb))
{
	int i;
	qsort (arr, n, sizeof ( arr [0]) , func);
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int i, n;
	char ch;
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	while(1){
		scanf("%c", &ch);
		// Different cases for ordering the sorted list
		switch(ch){
			case 'a':
				print(arr, n, my_compare_asc);
				break;
			case 'd':
				print(arr, n, my_compare_dsc);
				break;
			case 'e':
				exit(1);
				break;
		}
	}
	return 0;
}