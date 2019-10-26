/*
	JTSK-320112
	a3 p1.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int info;
    struct list* next; /* self reference */
};

// Add element to the beginning of the list
struct list* push_front(struct list* my_list, int value)
{
    struct list* newel ;
    newel = (struct list*)malloc(sizeof(struct list));
    if(newel == NULL)
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
}

// Add element to the end of the list
struct list* push_back(struct list* my_list, int value)
{
    struct list* cursor, *newel;
    cursor = my_list;
    newel = (struct list*)malloc(sizeof(struct list));
    if(newel == NULL)
    {
        printf (" Error allocating memory \n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if(my_list == NULL)
        return newel;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    return my_list ;
}

// Remove first element
struct list* remove_start(struct list *my_list)
{
    // if the list is empty that it cannot remove any element
    if(my_list==NULL)
    {
        return my_list;
    }
    struct list* new_list;
    new_list = ( my_list->next);
    free(my_list);
    my_list = new_list;
    return my_list;
}

void dispose_list ( struct list * my_list )
{
    struct list * nextelem ;
    while ( my_list != NULL )
    {
        nextelem = my_list -> next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}

void print_list ( struct list * my_list )
{
    struct list * p ;
    for ( p = my_list ; p ; p = p -> next )
    {
        printf ("%d ", p -> info ) ;
    }
    printf("\n");
}

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