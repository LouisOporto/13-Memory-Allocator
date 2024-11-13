withModule:
	@echo "modulemain w/ memory allocator module"
	gcc -c main.c memory_allocator.c
	gcc -o modulemain main.o memory_allocator.o
	
withoutModule:
	@echo "defaultmain w/o memory allocator module"
	gcc defaultmain.c -c 
	gcc -o defaultmain defaultmain.o


