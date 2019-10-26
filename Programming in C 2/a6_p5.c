/*
	JTSK-320112
	a6 p5.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char array[100]; // needed to print the content of the concatenation
	int n, k;
	scanf("%d", &n);
	getchar();
	FILE *final;
	// create empty file
	final = fopen("output.txt", "wb");
	if ( !final) {
	    fprintf ( stderr , "Cannot open file!\n") ;
		exit (1) ;
	}
	// get n files and concatenate
	for(k=0; k<n; k++){
		FILE *fptr;
		char filename[20];
		fgets(filename, sizeof(filename), stdin);
		filename[strlen(filename)-1] = '\0'; 
		fptr = fopen(filename, "rb");
		if ( fptr == NULL ) {
		    fprintf ( stderr , "Cannot open file!\n") ;
			exit (1) ;
		}
		// concatenate each file with "output.txt" and save the content there
		// usage of binary mode
		char buffer[64];
		char newline = '\n';
		size_t size = fread(buffer, sizeof(char), 64, fptr);
		fwrite(buffer, 1, size, final);
		fwrite(&newline, 1, 1, final);
		fclose(fptr); // close each file in the end
	}
	fclose(final);
	// open "output.txt" to read it this time
	final = fopen("output.txt", "rb");
	if ( final == NULL ) {
	    fprintf ( stderr , "Cannot open file!\n") ;
		exit (1) ;
	}
	printf("Concatenating the content of %d files ...\n", n);
	printf("The result is:\n");
	fread(array, 1, 100, final);
	printf("%s\n", array); // print the content
	
	fclose(final);

	return 0;
}