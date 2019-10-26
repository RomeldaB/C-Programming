/*
	JTSK-320112
	a6 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fptr;
	int k=1;
	char filename[20];
	fgets(filename, sizeof(filename), stdin);
	filename[strlen(filename)-1] = '\0'; 
	fptr = fopen(filename, "r");
	if ( fptr == NULL ) {
	    fprintf ( stderr , " Cannot open file !\n") ;
		exit (1) ;
	}
	// main loop
	while(k){
		char username[20], password[20];
		scanf("%s", username);
		// if exit is typed, program stops execution
		if(strcmp(username,"exit") == 0){
			printf("Exiting...\n");
			k=0;
			continue;			
		}
		scanf("%s", password);
		
		// go to the beginning of the file
		fseek(fptr, 0, SEEK_SET);
		
		char string[20], s[20];
		int n=0, i=0;
		// check for a line that equals the username
		while(fgets(string, sizeof(string), fptr) != NULL){
			string[strlen(string)-1] = '\0';
			n++;
			if(strcmp(username, string) == 0){
				i = n;
				break;
			}
		}
		if(i == 0){
			printf("Access to user %s is denied.\n", username);
		}else{ // if such that line is found
			// go to the line after that (check for its password)
			fseek(fptr, ftell(fptr), SEEK_SET);
			fgets(s, sizeof(s), fptr);
			s[strlen(s)-1] = '\0';
			if(strcmp(password, s) == 0){
				printf("Access to user %s is granted.\n", username);
			}else{
				printf("Access to user %s is denied.\n", username);
			}
		}	
	}
	// close file
	fclose(fptr);
	
	return 0;
}