/*
	JTSK-320112
	a2 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char one[100], two[100];
	char *oneTwo; 
    int i,j,k;
    // we enter the two strings
    fgets(one, sizeof(one), stdin); 
    fgets(two, sizeof(two), stdin);
    // we calculate the supposed sizw of the concatenation
    k = strlen(one)+strlen(two) - 1;
    // we dynamically allocate the concatenation
    oneTwo = (char*)malloc(sizeof(char)*k);
    // we concatenate the two strings
    for(i = 0; one[i] != '\n'; ++i){
        oneTwo[i] = one[i];
    }
    for(j = 0; two[j] != '\n'; ++j, ++i){
        oneTwo[i] = two[j];
    }
	oneTwo[i] = '\0';
   
    printf("Result of concatenation: %s\n", oneTwo);
    // we free the memory allocated before
	free(oneTwo);
	return 0;
}