/*
	JTSK-320112
	a3 p4.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

#ifndef LIST_H
#define LIST_H

struct list
{
    int info;
    struct list* next; /* self reference */
};

struct list* push_front(struct list*, int);
struct list* push_back(struct list*, int);
struct list* remove_start(struct list*);
void dispose_list(struct list*);
void print_list(struct list*);

#endif