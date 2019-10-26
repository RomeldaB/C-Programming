/*
	JTSK-320111
	a3 p9.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>

double fahrenheit(double x){
	return (9.0/5 *x + 32);
}

void Sort(double array[], int n)
{
	int i, a, f=n-2;
	int swapped=1;
	while(swapped){
		swapped = 0;
		for(i=0; i<=f; i++){
			if(array[i]>array[i+1]){
				a=array[i];
				array[i]=array[i+1];
				array[i+1]=a;
				swapped=1;
			}
		}
		f--;
	}
}

int main()
{
 	char c;
 	scanf("%c", &c);
 	int n;
 	scanf("%i", &n);
 	double sum=0;
 	double average;
 	
 	double temp[n];
	int t, k;
	
	for (t=0; t<n; t++){
		scanf("%lf", &temp[t]);
		sum = sum + temp[t];
	}
	
	average = sum/n;
	Sort(temp, n);

	switch (c) { 
	case 's': 
	 	printf("Sum of temperatures: %lf\n", sum); 
	 	break; 
	case 'p':
	 	printf("List of temperatures: \n");
	 	for(k=0; k<n; k++){
	 		printf("%lf\n", temp[k]);	
	 	} 
	 	break; 
	case 't':
	 	printf("List of temperatures in Fahrenheit: \n");
	 	for(k=0; k<n; k++){
	 		printf("%lf\n", fahrenheit(temp[k]));	
		}	 	 
	 	break; 
	default: 
	 	printf("Average of temperatures: %f\n", average); 
	} 
 	
	return 0;
}
