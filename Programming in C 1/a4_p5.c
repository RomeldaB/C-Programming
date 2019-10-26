/*
	JTSK-320111
	a4 p5.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

float addition(float a[],int n)
{
	int i;
	float s=0;
	for(i=0; i<n; i++){
		s+=a[i];
	}
	return s;	
}

float average(float a[], int n)
{
	int i;
	float av, s=0;
	for(i=0; i<n; i++){
		s+=a[i];
	}
	if(n==0){
		return 0;
	}
	av=s/n;
	return av;
	
}

int main()
{
 	float array[10];
 	int i;
 	array[0]=0;
 	
 	for(i=0; i<10 ; i++){
		scanf("%f", &array[i]);
		if(array[i]==-99.0){
			break;
		}
		 
 	}
	printf("Sum=%f\nAverage=%f\n", addition(array, i), average(array, i));
 	
  return 0;
}