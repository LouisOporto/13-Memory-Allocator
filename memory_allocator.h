#ifndef MEMORY_ALLOCATOR_H
#define MEMORY_ALLOCATOR_H

// Define memory interface
void* modMalloc(int size);

void modFree(void* ptr);

// Future editions include
// Utilizing heap-based memory allocation
#endif