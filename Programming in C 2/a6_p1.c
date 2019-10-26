/*
	JTSK-320112
	a6 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fptr;
	int count=0;
	char filename[30], c;
	fgets(filename, sizeof(filename), stdin);
	filename[strlen(filename)-1] = '\0';
	// open file
	fptr = fopen(filename, "r");
	if ( fptr == NULL ) {
	    fprintf ( stderr , " Cannot open file !\n") ;
		exit (1) ;
	}
	// increase counter for any group of characters different than letters
	while((c = fgetc(fptr)) != EOF) {
		if(c == ' ' || c == ',' || c == '?' || c == '!' || c == '.' || c == '\t' || c == '\r' || c == '\n'){
			while((c = fgetc(fptr)) != EOF){
			if(c == ' ' || c == ',' || c == '?' || c == '!' || c == '.' || c == '\t' || c == '\r' || c == '\n'){
				continue;
			}
            else{
            	break;
			}
		}
		count++;
		}
    }
    printf("The file contains %d words.\n", count);
    fclose(fptr);
	return 0;

}