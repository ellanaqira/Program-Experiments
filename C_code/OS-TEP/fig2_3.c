
/*
This program is based on Figure 2.3 from
"Operating Systems: Three Easy Pieces" by
Remzi H. Arpaci-Dusseau and Andrea C. Arpaci-Dusseau.

The program prints the process ID (PID) and the memory
address stored in the pointer p. It then repeatedly
increments p and prints its new value.
*/


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <stdint.h>


// Function Declaration
void delay(int num_of_sec);

// Main
int main(int argc, char *argv[]) {
    int *p = malloc(sizeof(int));
    assert(p != NULL);                  // ensure that p is not NULL or it will return an error message

    // print out process ID (PID) and the memory address that p points to
    printf("(%d) memory address of p: %08lx\n", getpid(), (uintptr_t)p);

    *p = 0;         // set p to zero
    while (1) {
        delay(1);
        *p+=1;
        printf("(%d) p: %d\n", getpid(), *p);
    }

    return 0;
}

// Function Definition
void delay(int num_of_sec) {
    clock_t start_time = clock();

    while (clock() - start_time < num_of_sec * CLOCKS_PER_SEC) {
        ;
    }
}