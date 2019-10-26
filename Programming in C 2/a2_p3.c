/*
	JTSK-320112
	a2 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// function for reading the matrix
void read_matrix(int **matrix,int row, int col){
	int i, j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
}

// function for printing the matrix
void print(int **matrix,int row, int col){
	int i, j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

// multiplication of matrices function
void multiply(int **m1, int **m2, int **m1xm2 ,int r1, int c1r2, int c2){
	int i, j, k, sum = 0;
	for(i=0; i<r1; i++){
		for(k=0; k<c2; k++){
			for(j=0; j<c1r2; j++){
				sum+= (m1[i][j]*m2[j][k]);
			}
			m1xm2[i][k] = sum;
			sum = 0;
		}		
	}
}

int main()
{
	int **m_a, **m_b, **axb;
	int n, m, p, i;
	
	// dimensions of the matrices
	scanf("%d",&n); // nr of rows of matrix A and AxB
	scanf("%d",&m); // nr of columns of A and rows of B
	scanf("%d",&p); // nr of columns of B and AxB
	
	// allocating memory for the first matrix
	m_a = (int**)malloc(sizeof(int*)*n);
	for(i=0; i<n; i++){
		m_a[i] = (int*)malloc(sizeof(int)*m);
	}
	// allocating memory for the second matrix
	m_b = (int**)malloc(sizeof(int*)*m);
	for(i=0; i<m; i++){
		m_b[i] = (int*)malloc(sizeof(int)*p);
	}
	// allocating memory for the multiplication of matrices
	axb = (int**)malloc(sizeof(int*)*n);
	for(i=0; i<n; i++){
		axb[i] = (int*)malloc(sizeof(int)*p);
	}
	
	// use of the function read_matrix for A and B
	read_matrix(m_a, n, m);
	read_matrix(m_b, m, p);
	
	// printing matrix A
	printf("Matrix A:\n");
	print(m_a, n, m);
	
	// printing matrix B
	printf("Matrix B:\n");
	print(m_b, m, p);
	
	// printing AxB
	printf("The multiplication result AxB:\n");
	multiply(m_a, m_b, axb, n, m, p);
	print(axb, n, p);
	// free the memory for the 3 matrices
	for(i=0; i<n; i++){
		free(m_a[i]);
	}
	free(m_a);
	for(i=0; i<m; i++){
		free(m_b[i]);
	}
	free(m_b);
	for(i=0; i<n; i++){
		free(axb[i]);
	}
	free(axb);

	return 0;
}