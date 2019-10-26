/*
	JTSK-320112
	a5 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#ifndef _STACK_H_
#define _STACK_H_
typedef struct stack 
{
	unsigned int count;
	int array[12]; // Container
} Stack;

// Functions
void push(int, Stack*);
int pop(Stack*);
int isEmpty(Stack*);
void empty(Stack*);
void to_binary(Stack*, unsigned int);

#endif // _STACK_H_
