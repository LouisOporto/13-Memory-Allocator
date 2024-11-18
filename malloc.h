#include <stdlib.h>

#ifndef MALLOC_H
#define MALLOC_H

// TODO names will be rewritten to just malloc, realloc, free (no mod prefix)

// Define memory interface
void* modMalloc(int size); // malloc reset allocated blocks to 0

void modFree(void* ptr);

void* modRealloc(void* ptr, int size); // Less focus on this for now


// Define memory block structure
typedef struct {
    int size;
    int isFree;
    void* data;
} MemoryBlock;

// Future editions include
// Utilizing heap-based memory allocation

// All strucures are store in this block
// Minheap for freeb blocs in final version, but arrays for now
#endif