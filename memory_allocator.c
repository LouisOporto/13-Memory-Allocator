#include <stdio.h>
#include <stdlib.h>

#include "memory_allocator.h"


void* modMalloc(int size) {
    printf("Implemented malloc\n");
    return malloc(size);
}

void modFree(void* ptr) {
    printf("Implemented free\n");
    free(ptr);
}

