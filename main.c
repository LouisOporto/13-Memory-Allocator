#include <stdio.h>
#include <stdlib.h>

// #define SYSTEM_MALLOC
#ifdef SYSTEM_MALLOC
#define modFree free
#define modMalloc malloc
#else
#include "memory_allocator.h"
#endif

// TODO: Implement a more indepth test function (probably a string that is dynamically allocated adding more characters to it).


// make memttest_sys to use system malloc
// make memtest_dev to use modified malloc

// ./main to run

int main(int argc, int argv[]) {
    // Array test
    int size;
    printf("Testing Memmory Allocator\n");
    
    printf("Creating dynamic array using malloc\n");
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int* array = (int*)modMalloc(sizeof(int) * size);

    // Populate array
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    // Print array
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    // Free array
    modFree(array);

    // Done testing
    printf("Done testing Memmory Allocator\n");
    // END OF ARRAY TEST

    return 0;
}