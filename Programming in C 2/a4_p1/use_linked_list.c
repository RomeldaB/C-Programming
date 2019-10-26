/*
	JTSK-320112
	a4 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    struct list *my_list = NULL; // define list
    char ch;
    int a = 1;

    do
    {
        scanf("%c", &ch);
        int n, m;
        switch(ch)
        {
        case 'a':
            scanf("%d", &n);
            getchar();
            // when a is entered, an int will be
            // entered from the keyboard and added
            // to the end of the list
            my_list = push_back(my_list, n);
            break;
        case 'b':
            scanf("%d", &m);
            getchar();
            // when b is entered, an int will be
            // entered from the keyboard and added
            // to the beginning of the list
            my_list = push_front (my_list, m);
            break;
        case 'r':
            my_list = remove_start(my_list);
            break;
        case 'p':
            print_list(my_list);
            break;
        case 'q':
            dispose_list(my_list);
            a = 0; // finish the loop
            break;
        }
    }
    while(a);

    return 0;
}
