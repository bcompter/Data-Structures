/** 
 * An example of a custom linked list implemented in C
 */

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

/**
 * Main entry point to test our implementation
 */
int main(int argc, char** argv) {

    // Create a list for us to test with
    List test_list;
    test_list.head = NULL;
    test_list.size = 0;
    
    // And some test nodes
    Node test_node_1;
    test_node_1.data = 42;
    
    Node test_node_2;
    test_node_2.data = 24;
    
    Node test_node_3;
    test_node_3.data = 14;
    
    Node test_node_4;
    test_node_4.data = 7;
    
    // Add and display our list
    Add(&test_node_1, &test_list);
    Display(test_list);
    
    Add(&test_node_2, &test_list);
    Display(test_list);
    
    Add(&test_node_3, &test_list);
    Display(test_list);
    
    Node * test = Remove(&test_list);
    Display(test_list);
    printf("Removed %d\n", test->data);
    
    Add(&test_node_4, &test_list);
    Display(test_list);
    
    return (EXIT_SUCCESS);
}  /* end main */

