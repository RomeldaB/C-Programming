/*
	JTSK-320112
	a5 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Function to push a element into the stack
void push(int x, Stack *s){
    s->array[s->count++] = x;
}

// Pop the last element out
int pop(Stack *s){
    int x;
    x = s->array[(s->count)-1];
    s->array[s->count-1] = 0;
    (s->count)--;
    return x;
}

// Check whether stack is empty
int isEmpty(Stack *s){
    return s->count == 0;
}

// Empty the stack and print the removed elements
void empty(Stack *s){
    printf("Emptying Stack ");
    while(!isEmpty(s)){
        printf("%d ", pop(s));
    }
    printf("\n");
}

void to_binary(Stack* s, unsigned int n){
    // array to store binary number
    unsigned int binaryNum[1000];

    // counter for binary array
    int i = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        // pushing the bits into the stack
        push(binaryNum[i], s);
        n = n / 2;
        i++;
    }
}