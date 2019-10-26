/*
	JTSK-320111
	a6 p5.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

double sprod(double v[], double w[], int n)
{
	int k;
	double product=0;
	for(k=0; k<n; k++){
		product += (v[k] * w[k]);
	}
	return product;
}

double small(double v[], int n)
{
	int k;
	double s=v[0];
	for(k=0; k<n; k++){
		if(v[k]<s){
			s=v[k];
		}
	}
	return s;
}

double large(double v[], int n)
{
	int k;
	double l=v[0];
	for(k=0; k<n; k++){
		if(v[k]>l){
			l=v[k];
		}
	}
	return l;	
}

int small_position(double v[], int n)
{
	int k, s_pos;
	double s=v[0];
	for(k=0; k<n; k++){
		if(v[k]<s){
			s=v[k];
		}
	}
	for(k=0; k<n; k++){
		if(v[k]==s){
			s_pos=k;
			break;
		}
	}
	return s_pos;
}

int large_position(double v[], int n)
{
	int k, l_pos;
	double l=v[0];
	for(k=0; k<n; k++){
		if(v[k]>l){
			l=v[k];
		}
	}
	for(k=0; k<n; k++){
		if(v[k]==l){
			l_pos=k;
			break;
		}
	}
	return l_pos;
}

int main()
{
	int k, n;
	scanf("%i", &n);
	double v[n], w[n];
	
	for(k=0; k<n; k++){
		scanf("%lf", &v[k]);
	}
	for(k=0; k<n; k++){
		scanf("%lf", &w[k]);
	}
	
	printf("Scalar product=%lf\n", sprod(v, w, n));
	printf("The smallest = %lf\n", small(v, n));	
	printf("Position of smallest = %i\n", small_position(v, n));
	printf("The largest = %lf\n", large(v, n));
	printf("Position of largest = %i\n", large_position(v, n));
	printf("The smallest = %lf\n", small(w, n));	
	printf("Position of smallest = %i\n", small_position(w, n));
	printf("The largest = %lf\n", large(w, n));
	printf("Position of largest = %i\n", large_position(w, n));	
	return 0;
}