#include "malloc.h"

#include <stdio.h>
#include <stdlib.h>

// Define memory block structure
MemoryBlock* memoryBlock;

// Define memory interface
void* modMalloc(int size) {
    void* ptr = malloc(size);  // Implement this
    if (ptr == NULL) {
        fprintf(stderr, __FILE__ ":%d malloc failed\n", __LINE__);
        exit(1);
    }
    fprintf(stderr, __FILE__ ":%d: malloc(%lu) = %p\n", __LINE__, size, ptr);
    return ptr;
}

void* modRealloc(void* ptr, int size) {
    void* newPtr = realloc(ptr, size);  // Implement this
    if (newPtr == NULL) {
        fprintf(stderr, __FILE__ ":%d realloc failed\n", __LINE__);
        exit(1);
    }
    fprintf(stderr, __FILE__ ":%d: realloc(%p, %lu) = %p\n", __LINE__, ptr,
            size, newPtr);
    return newPtr;
}

void modFree(void* ptr) {
    fprintf(stderr, __FILE__ ": free(%p)\n", ptr);
    free(ptr);  // Implement this
}
