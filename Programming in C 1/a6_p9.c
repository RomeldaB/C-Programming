/*
	JTSK-320111
	a6 p9.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *a1, *a2, *a3;
	char s1[100], s2[100];
	double x, y;
	
	printf("File 1: ");
	fgets(s1, sizeof(s1), stdin);
	s1[strlen(s1)-1] = '\0';
	
	printf("File 2: ");
	fgets(s2, sizeof(s2), stdin);
	s2[strlen(s2)-1] = '\0';
	
	a1 = fopen(s1, "r");
	if(a1 == NULL){
		printf("Can't open file!\n");
		exit(1);
	}
	a2 = fopen(s2, "r");
	if(a2 == NULL){
		printf("Can't open file!\n");
		exit(1);
	}
	a3 = fopen("xy.txt", "w");
	if(a3 == NULL){
		exit(1);
	}
	
	fscanf(a1, "%lf", &x);
	fscanf(a2, "%lf", &y);
	
	fprintf(a3, "Sum = %lf\n", x+y);
	fprintf(a3, "Difference = %lf\n", x-y);
	fprintf(a3, "Product = %lf\n", x*y);
	fprintf(a3, "Division = %lf\n", x/y);
	
	fclose(a1);
	fclose(a2);
	fclose(a3);	
	
	return 0;
}