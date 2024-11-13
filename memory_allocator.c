#include <stdio.h>
#include <stdlib.h> // Future version will use heap-based memory allocation
// No reliance on stdlib.h

#include "memory_allocator.h"

// Define memory interface
void* modMalloc(int size) {
    printf("Implemented malloc\n");
    return malloc(size);
}

void* modRealloc(void* ptr, int size) {
    printf("Implemented realloc\n");
    return realloc(ptr, size);
}

void modFree(void* ptr) {
    printf("Implemented free\n");
    free(ptr);
}

