#ifndef LINKED_LIST_H
#define	LINKED_LIST_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>

/**
 * A node in our list
 */
typedef struct Node Node;
struct Node {
    Node * next;
    Node * prev;
    int data;    
};

/**
 * Our linked list
 */
typedef struct{
    Node * head;
    int size;
} List;

/**
 * Add a Node to the end of this list which becomes the new Tail
 */
void Add(Node * n, List * l);

/**
 * Remove and return the tail from a list
 * Returns NULL if the list is empty
 */
Node * Remove(List * l);

/**
 * Traverse our list and print out the data of each Node
 */
void Display(List l);

#ifdef	__cplusplus
}
#endif

#endif	/* LINKED_LIST_H */

