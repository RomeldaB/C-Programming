/*
	JTSK-320112
	a5 p3.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/
#ifndef _STACK_H_
#define _STACK_H_

typedef struct stack {
	unsigned int count;
	char *array[30]; // Container
} Stack;

// Functions
void push(char*, Stack*);
char* pop(Stack*);
void pop2(Stack*, char*);
int isEmpty(Stack*);
void empty(Stack*);

#endif // _STACK_H_
