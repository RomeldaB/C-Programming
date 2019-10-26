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

void push(char* word , Stack* s)
{
    s->array[s->count++] = word;
}

char* pop(Stack* s)
{
    if(s->count == 0)
        return NULL;
    char * word = s->array[s->count-1];
    s->array[s->count-1] = NULL;
    s->count--;

    return word;
}

// Function needed to compare the string and then remove it
void pop2(Stack* s, char* word)
{
    if(strcmp(word, s->array[s->count-1]) == 0)
    {
        s->array[s->count-1] = NULL;
        s->count--;
    }
}

int isEmpty(Stack* s)
{
    return (s->count == 0);
}

void empty(Stack* s)
{
    if(isEmpty(s))
        return;
    while(s->count!=0)
    {
        pop(s);
    }
}
