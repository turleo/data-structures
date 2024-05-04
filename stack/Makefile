compile: main.c stack.c stack.h
	gcc main.c stack.c -o stack.out
run: compile
	./stack.out
debug: compile
	gdb ./stack.out
test: compile
	./stack.out > output.txt && diff expected-output.txt output.txt
