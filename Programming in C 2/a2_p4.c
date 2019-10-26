/*
	JTSK-320112
	a2 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Function for reading the elements of the 3D-array
void read_3d_m(int ***matrix, int row, int col, int depth){
	int i, j, k;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			for(k=0; k<depth; k++){
				scanf("%d", &matrix[i][j][k]);
			}
		}
	}
}
// Function for printing the elements of the 2D-arrays parallel to XOY-plane
void print_sections(int ***matrix, int row, int col, int depth){
	int i, j, k;
	for(k=0; k<depth; k++){ // these arrays will be along the depth of arr_3d
		printf("Section %d:\n", k+1);
		for(i=0; i<row; i++){
			for(j=0; j<col; j++){
				printf("%d ", matrix[i][j][k]);
			}
		printf("\n");
		}
	}
}

int main()
{
	int ***arr_3d;
	int row, col, dep, i, j;
	scanf("%d%d%d", &row, &col, &dep);
	// allocate memory for the 3D-array
	arr_3d = (int***)malloc(sizeof(int**)*row);
	for(i=0; i<row; i++){
		arr_3d[i] = (int**)malloc(sizeof(int*)*col);
		for(j=0; j<col; j++){
			arr_3d[i][j] = (int*)malloc(sizeof(int*)*dep);
		}
	}
	// getting the elements of the array from the standard input 
	read_3d_m(arr_3d, row, col, dep);
	// printing the elements of the 2D-arrays parallel to XOY-plane
	print_sections(arr_3d, row, col, dep);
	// free the memory allocated
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			free(arr_3d[i][j]);
		}
		free(arr_3d);
	}
	return 0;
}