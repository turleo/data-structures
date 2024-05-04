compile: main.c heap.c heap.h
	gcc main.c heap.c -o heap-max.out
run: compile
	./heap-max.out
debug: compile
	gdb ./heap-max.out
test: compile
	./heap-max.out > output.txt && diff expected-output.txt output.txt
