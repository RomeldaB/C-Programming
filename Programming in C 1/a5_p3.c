/*
	JTSK-320111
	a5 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

float sum(float arr[], int num);
float geometric_mean(float arr[], int num);
float highest(float arr[], int num);
float smallest(float arr[], int num);

int main()
{
	float arr[15];
	int i,count=0;
	printf("Enter up to 15 floats:\n");
	arr[0]=0;
	 	for(i=0; i<15 ; i++){
			scanf("%f", &arr[i]);
			if(arr[i]>=0){
				count++;
			}
			if(arr[i]<0){
			break;
			}
		}
	char c;
	printf("Enter a character between m, h, l or s:\n");
	getchar();
	scanf("%c", &c);
		switch (c){
			case 's':
				printf("Sum = %f\n", sum(arr, count));
				break;
			case 'm':
				printf("Geometric mean = %f\n", geometric_mean(arr, count));
				break;
			case 'h':
				printf("Highest number = %f\n", highest(arr, count));
				break;
			case 'l':
				printf("Smallest number = %f\n", smallest(arr, count));
				break;
			default:
				printf("Error!");
		}
	return 0;
}

float sum(float arr[], int num)
{
	int k;
	float s=0;
	for(k=0; k<num; k++){
		s+=arr[k];
	}
	return s;
}

float geometric_mean(float arr[], int num)
{
	int a;
	float geo_mean, p=1;
	for(a=0; a<num; a++){
		p*=arr[a];
	}
	geo_mean = (float)pow(p, (1.0/a));
	return geo_mean;	
}

float highest(float arr[], int num)
{
	int h;
	float high;
	for(h = 1; h < num; ++h){
       if(arr[0] < arr[h])
           arr[0] = arr[h];
    }
    high=arr[0];
    return high;
}

float smallest(float arr[], int num)
{
	int l;
	float small;
	for(l = num-1; l > 1; --l){
       if(arr[0] > arr[l])
           arr[0] = arr[l];
    }
    small=arr[0];
    return small;
}
