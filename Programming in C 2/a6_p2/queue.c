/*
	JTSK-320112
	a6 p2.c
	Romelda Blaceri
	rblaceri@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_to_node(Item item, Node *pn);
static void copy_to_item(Node *pn, Item *pi);

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    // Queue is full case
    if (queue_is_full(pq)==1)
        return -1;
    Node *newnode;
    newnode = (Node*)malloc(sizeof(newnode));
    if(!newnode)
        exit(1);
    // copy item to the new node
    copy_to_node(item, newnode);
    newnode->next = NULL;
    if(queue_is_empty(pq) == 1)
        pq->front = newnode;
    else
        (pq->rear)->next = newnode;
    pq->rear = newnode;
    pq->items++;
    // Successfully enqueued element to queue
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    // empty queue case
    if(queue_is_empty(pq) == 1)
        return -1;
    Node *newnode;
    // copy the item we want to remove
    copy_to_item(pq->front, pitem);
    newnode = pq->front;
    pq->front = (pq->front)->next;
    free(newnode);
    if(pq->items == 1){
        pq->rear = NULL;
    }
    // decrease queue size
    pq->items--;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

static void copy_to_node(Item item, Node *pn)
{
	pn->item = item;
}

static void copy_to_item(Node *pn, Item *pi)
{
	*pi = pn->item;
}
