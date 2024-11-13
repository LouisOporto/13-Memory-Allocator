all: build link

build:
	gcc -c main.c memory_allocator.c

link:
	gcc -o main main.o memory_allocator.o