#ifndef MEMORY_ALLOCATOR_H
#define MEMORY_ALLOCATOR_H

// TODO names will be rewritten to just malloc, realloc, free (no mod prefix)

// Define memory interface
void* modMalloc(int size); // malloc reset allocated blocks to 0

void* modRealloc(void* ptr, int size);

void modFree(void* ptr);

// Future editions include
// Utilizing heap-based memory allocation

// All strucures are store in this block
// Minheap for freeb blocs in final version, but arrays for now
#endif