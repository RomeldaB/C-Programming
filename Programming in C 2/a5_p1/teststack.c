/*
	JTSK-320112
	a5 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack s;
    s.count = 0;
    int x, a=1;
    char ch;
    while(((ch = getchar()) != EOF) && (a==1)){

        switch(ch){
            case 's':
            	// Push an element into the stack
                if(s.count < 12){
                    scanf("%d", &x);
                    getchar();
                    push(x,&s);
                    printf("Pushing %d\n", x);
                }else{
                    printf("Pushing Stack Overflow\n");
                }
                break;
            case 'p':
            	// Pop the last entered element out of the stack
                if(s.count>0){
                    printf("Popping %d\n", pop(&s));
                }else{
                    printf("Popping Stack Underflow\n");
                }
                break;
            case 'e':
            	// Empty the stack
                empty(&s);
                break;
            case 'q':
            	// Quit the loop execution
                printf("Quit\n");
                a=0;
                break;
        }
    }

    return 0;
}