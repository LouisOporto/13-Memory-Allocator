#include <stdlib.h>

#ifndef MALLOC_H
#define MALLOC_H

// Define memory block structure
typedef struct {
    int size;
    int isFree;
    void* data;
} MemoryBlock;

// Define memory interface
void* modMalloc(int size);  // malloc reset allocated blocks to 0

void modFree(void* ptr);

void* modRealloc(void* ptr, int size);  // Less focus on this for now

#endif