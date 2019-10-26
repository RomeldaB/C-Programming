 /*
	JTSK-320111
	a5 p8.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void matrix(int mat[30][30], int m)
{
	int k, l;
	for(k=0; k<m; k++){
		for(l=0; l<m; l++){
			printf("%i ", mat[k][l]);
		}
		printf("\n");
	}
}

void under_diagonal(int mat[30][30], int m)
{
	int k, l;
	for(k=0; k<m; k++){
		for(l=0; l<m; l++){
			if(k+l>=m){
				printf("%i ", mat[k][l]);
			}
		}
	}
	printf("\n");
}

int main () 
{
	int table[30][30];
	int i, j, dim;
	scanf ("%d", &dim);
	
	for(i=0; i<dim; i++){	
		for(j=0; j<dim; j++){
			scanf("%i", &table[i][j]);
		}
	}
	
	printf("The entered matrix is:\n");
	matrix(table, dim);
	
	printf("Under the secondary diagonal:\n");
	under_diagonal(table, dim);
	
	return 0;
}