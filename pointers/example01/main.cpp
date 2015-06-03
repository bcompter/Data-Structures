#include <cstdlib>
#include <stdio.h>

using namespace std;

/**
 * A brief introduction to pointers
 */
int main(int argc, char** argv) {

    // Lets make an integer!
    int myInteger = 42;

    /**
     * And now an int pointer to that integer
     * Keep in mind I am using integers here but you could substitute just 
     * about any object you wish.
     * 
     * I am using the & operator to get the address of myInteger for my pointer
     * to point to.
     */
    int * ptr_myInteger = &myInteger;
    
    /**
     * Lets print some stuff out to see what we have
     * Take a careful look at the use of the dereference operator * in the third 
     * printf.  We can use this to look at data located at a location in memory
     */
    printf("Our integer is %d\n", myInteger);
    printf("It is located at memory address %d, (0x%x)\n", ptr_myInteger, ptr_myInteger);
    printf("We can dereference our pointer to get the original data like so, %d\n", *ptr_myInteger);
    
    return 0;
}