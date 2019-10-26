/*
	JTSK-320112
	a3 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
	int info;
	struct list* next; /* self reference */
};

struct list* push_front(struct list* my_list, int value) {
	struct list* newel ;
	newel = (struct list*)malloc(sizeof(struct list));
	if(newel == NULL){
		printf("Error allocating memory\n");
		return my_list;
	}
	newel->info = value;
	newel->next = my_list;
	return newel;
}

struct list* push_back(struct list* my_list, int value){
	struct list* cursor, *newel;
	cursor = my_list;
	newel = (struct list*)malloc(sizeof(struct list));
	if(newel == NULL){
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

// Function to find the number of elements in a list
int size(struct list* my_list){
	int counter=1;
	struct list *cursor;
	cursor = my_list;
	while(cursor->next!=NULL){
		cursor = cursor->next;
		counter++;
	}
	return counter;
}

// Function to add an element to the list in a specific position
struct list* add_el(struct list* my_list, int position, int value){
	int i;
	struct list *cursor, *newel, *cursor2; 
	cursor = my_list;
	// Checking for negative position or larger than size positions
	if((position<0) || (position>size(my_list))){
		printf("Invalid position!\n");
		return my_list;
	}
	// Special case for adding the element in the beginning
	else if(position==0){
		return push_front(my_list, value);		
	}
	// Normal case for adding an element
	else{
		// memory allocation for the new list of the element we want to add
		newel = (struct list*)malloc(sizeof(struct list));
		if(newel == NULL){
			printf (" Error allocating memory \n");
			return my_list;
		}
		newel->info = value;
		newel->next = NULL;
		// case when list has no element
		if(my_list == NULL)
			return newel;
		for(i=0; i<(position-1); i++){
			cursor = cursor->next;		
		}
		// Inserting the element at the required position
		cursor2 = cursor->next;
		cursor->next = newel;
		newel->next = cursor2;
		
		return my_list;	
	}
}

// Function for reversing a list
struct list* reverse(struct list *my_list){
	struct list *current, *prev_list, *next_list;
	current = my_list;
    prev_list = NULL;
  	while (current != NULL) 
        {
            next_list  = current->next;   
        	current->next = prev_list;    
        	prev_list = current; 
        	current = next_list; 
        } 
    my_list = prev_list; 
    return my_list;
}

struct list* remove_start(struct list *my_list)
{
	if(my_list==NULL){
		return my_list;
	}
	struct list* new_list;
	new_list = ( my_list->next);
	free(my_list);
	my_list = new_list;
	return my_list;
}

void dispose_list ( struct list * my_list ) {
	struct list * nextelem ;
	while ( my_list != NULL ) {
		nextelem = my_list -> next ;
		free ( my_list ) ;
		my_list = nextelem ;
	}
}

void print_list ( struct list * my_list ) {
	struct list * p ;
	for ( p = my_list ; p ; p = p -> next ) {
		printf ("%d ", p -> info ) ;
	}
	printf("\n");
}

int main()
{
	struct list *my_list = NULL;
	char ch;
	int a = 1;
	
	do{
		scanf("%c", &ch);
		int n, m, l, k;
		switch(ch){
			case 'a':
				scanf("%d", &n);
				getchar();
				my_list = push_back(my_list, n);
				break;
			case 'b':
				scanf("%d", &m);
				getchar();
				my_list = push_front (my_list, m);
				break;
			case 'r':
				my_list = remove_start(my_list);
				break;
			case 'p':
				print_list(my_list);
				break;
			case 'i':
				scanf("%d%d", &l, &k);
				getchar();
				my_list = add_el(my_list, l, k);
				break;
			case 'R':
				my_list = reverse(my_list);
				break;
			case 'q':
				dispose_list(my_list);
				a = 0;
				break;
		}
	}while(a);
	
	return 0;
}