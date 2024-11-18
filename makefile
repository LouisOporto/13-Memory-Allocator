memtest_sys:
	gcc main.c memory_allocator.c -o main.exe -DSYSTEM_MALLOC
memtest_dev:
	gcc main.c memory_allocator.c -o main.exe 

