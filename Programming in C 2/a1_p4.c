/*
	JTSK-320112
	a1 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
// macro for calculating the scalar product s of n-dimensional vectors x and y
#define SCALAR_P(x,y,s,n)\
{\
	int i;\
	for(i=0; i<n; i++){\
		s+=(x[i]*y[i]);\
	}\
}
// macro for calculating n intermediate values a[n] of n-dim. vectors x and y
#define INTERMEDIATE(x,y,a,n)\
{\
	int i;\
	for(i=0; i<n; i++){\
		 a[i] = (x[i]*y[i]); \
	}\
}

int main()
{
	int n, i, s=0;
	scanf("%d", &n); // number of dimensions
	int u[n], v[n], a[n];
	// first vector
	for(i=0; i<n; i++){
		scanf("%d", &u[i]);
	}
	// second vector
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	// Conditional compilation:
	// if INTERMEDIATE is not defined, intermediate values will not be printed
	#ifdef INTERMEDIATE
	INTERMEDIATE(u,v,a,n);
	printf("The intermediate product values are:\n");
	for(i=0; i<n; i++){
		printf("%d\n", a[i]);
	}
	#endif
		
	SCALAR_P(u,v,s,n);
	printf("The scalar product is: %d\n", s);
	
	return 0;
}