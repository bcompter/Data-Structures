#include "Linked_list.h"

/**
 * Add a Node to the end of this list which becomes the new Tail
 */
void Add(Node * n, List * l)
{
    if (l->head == NULL)
    {
        l->head  = n;
        n->next = n;
        n->prev = n;
        l->size  = 1;
    }
    else
    {
        Node * tail = l->head->prev;
        Node * head = l->head;
        
        head->prev = n;
        tail->next = n;
        n->next = head;
        n->prev = tail;
        
        l->size++;
    }
}  /* end Add */

/**
 * Remove and return the tail from a list
 * Returns NULL if the list is empty
 */
Node * Remove(List * l)
{
    Node * tail = l->head->prev;
    Node * head = l->head;
    Node * new_tail = tail->prev;
    
    head->prev = new_tail;
    new_tail->next = head;
    
    if (l->size > 0)
        l->size--;
    
    if (l->size == 0)
        l->head = NULL;
    
    return tail;
}

/**
 * Traverse our list and print out the data of each Node
 */
void Display(List l)
{
    int i;
    Node * n = l.head;
    for(i = 0; i < l.size; i++)
    {
        printf("%d, ", n->data);
        n = n->next;
    }
    printf("\n");
    
}  // end Display
