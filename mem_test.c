#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// #define SYSTEM_MALLOC
#ifdef SYSTEM_MALLOC
#define modFree free
#define modMalloc malloc
#else
#include "malloc.h"
#endif

#define TEST_SIZE 10

#define MIN(a, b) ((a) < (b) ? (a) : (b))

// make memttest_sys to use system malloc
// make memtest_dev to use modified malloc

// ./main to run the program

// TODO: Implement a more indepth test function (probably a string that is dynamically allocated adding more characters to it).

int rand_between(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main(int argc, char* argv[]) {
    srand(time(NULL));

    char *test_string = "Now is the time for all good people to come to the aid of thei country.";

    // String test
    if (argc > 1) {
        test_string = argv[1];
    }

    char *ptrs[TEST_SIZE];

    for (int ix = 0; ix < TEST_SIZE; ix++) {
        int size = rand_between(1, 30);
        fprintf(stderr, "[%d] size: '%d'\n", ix, size);

        ptrs[ix] = (char*)modMalloc(size);
        if (ptrs[ix] == NULL) {
            fprintf(stderr, "malloc failed\n");
            exit(1);
        }

        int len_to_copy = MIN(strlen(test_string), size);

        fprintf(stderr, "[%d] ptrs[%d]: %p, going to copy %d chars\n", ix, ix, ptrs[ix], len_to_copy);

        strncpy(ptrs[ix], test_string, len_to_copy);
        ptrs[ix][len_to_copy] = '\0';

        fprintf(stderr, "[%x] %s\n", ix, ptrs[ix]);
    }

    for (int ix = 0; ix < TEST_SIZE; ix++) {
        fprintf(stderr, "[%d] freeing '%p' (%s)\n", ix, ptrs[ix], ptrs[ix]);
        modFree(ptrs[ix]);
        fprintf(stderr, "[%d] freed %p]n", ix, ptrs[ix]);
    }

    return 0;

    // REMOVE LATER // 
    // Array test
    int size = 3;
    printf("Testing Memmory Allocator\n");
    
    printf("Creating dynamic array using malloc\n");
    printf("Enter the size of the array:\n");

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