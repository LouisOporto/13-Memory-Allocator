#include <stdio.h>
#include <stdlib.h> // Future version will use heap-based memory allocation
// No reliance on stdlib.h

#include "memory_allocator.h"

// Define memory interface
void* modMalloc(int size) {
    void *ptr = malloc(size); // Implement this
    if (ptr == NULL) {
        fprintf(stderr, __FILE__ ":%d malloc failed\n", __LINE__);
        exit(1);
    }
    fprintf(stderr, __FILE__ ":%d: malloc(%d) = %p\n", __LINE__, size, ptr);
    printf("Implemented malloc\n");
    return malloc(size);
}

void* modRealloc(void* ptr, int size) {
    void *newPtr = realloc(ptr, size); // Implement this
    printf("Implemented realloc\n");
    return newPtr;
}

void modFree(void* ptr) {
    free(ptr); // Implement this
    fprintf(stderr, __FILE__ ":%d: free(%p)\n", __LINE__, ptr);
    printf("Implemented free\n");
}

