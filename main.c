#include <stdio.h>
#include "memory_allocator.h"

int main(int argc, int argv[]) {
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
    return 0;
}