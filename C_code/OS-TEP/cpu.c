#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Declarartion
void delay(int num_of_sec);


// MAIN
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }

    char *str = argv[1];
    while (1) {
        delay(1);
        printf("%s\n", str);
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
