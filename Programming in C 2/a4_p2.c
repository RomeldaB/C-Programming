/*
	JTSK-320112
	a4 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to turn all the letters to uppercase
void uppercase(char *str){
	int i;
	for(i=0;str[i];i++)
    {
        if((str[i]>=97) && (str[i]<=122))
            printf("%c", str[i]-32);
        else
        	printf("%c", str[i]);
    }  
}

// Function to turn all the letters to lowercase
void lowercase(char *str){
	int i;
	for(i=0;str[i];i++)
    {
        if((str[i]>=65) && (str[i]<=90))
            printf("%c", str[i]+32);
        else
        	printf("%c", str[i]);
    }  
}

// Function to turn all the lowercase letters 
// to uppercase and the vice versa
void upper_lower(char *str){
	int i;
	for(i=0;str[i];i++)
    {
        if((str[i]>=97) && (str[i]<=122))
            printf("%c", str[i]-32);
        else if((str[i]>=65) && (str[i]<=90))
        	printf("%c", str[i]+32);       	
		else
		    printf("%c", str[i]);
    }
}

// Function to end the loop
void finish(char *str){
	exit(1);
}

// Function pointer
void (*function[4]) (char * str)
	= {uppercase, lowercase, upper_lower, finish};

int main()
{
	int n;
	char str[50];
	// Geting the screen from the keyboard
	fgets(str, sizeof(str), stdin);
	scanf("%d", &n);
	while(1){
		function[n-1](str);
		scanf("%d", &n);
	}
	return 0;
}