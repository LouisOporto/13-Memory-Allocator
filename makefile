memtest_sys:
	gcc -o memtest_sys mem_test.c -DSYSTEM_MALLOC

memtest_dev:
	gcc -o memtest_dev mem_test.c malloc.c

clean:
	rm -f memtest_sys memtest_dev

