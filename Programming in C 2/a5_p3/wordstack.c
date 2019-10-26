/*
	JTSK-320112
	a5 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main()
{
    while(1){
        Stack s;
        s.count = 0;
        // get a sentence from the keyboard
        char sentence[100];
        fgets(sentence, sizeof(sentence), stdin);
        sentence[strlen(sentence)-1] = '\0';
        // quit execution for sentence = exit
        if(strcmp(sentence,"exit") == 0){
            break;
        }
        // get the individual words of the sentence
        // and push them into the stack
        char *p = strtok(sentence," ");
        while(p != NULL) {
            push(p,&s);
            p = strtok(NULL," ");
        }
        int n = s.count;
        // check for palindromic sentence in cases of even and odd stack size
        if((n%2) == 0){
            for(int i=0; i<=(n/2-1); i++){
                pop2(&s, s.array[i]);
            }
            if(s.count == n/2){
                printf("The sentence is palindromic by words!\n");
            }else{
                printf("The sentence is not palindromic by words!\n");
            }
        }
        if((n%2) == 1){
            for(int i=0; i<(n-1)/2; i++){
                pop2(&s, s.array[i]);
            }
            if(s.count == (n+1)/2){
                printf("The sentence is palindromic by words!\n");
            }else{
                printf("The sentence is not palindromic by words!\n");
            }
        }
    }
    return 0;
}