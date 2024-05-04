compile: main.c heap.c heap.h
	gcc main.c heap.c -o heap-min.out -g
run: compile
	./heap-min.out
debug: compile
	gdb ./heap-min.out
test: compile
	./heap-min.out > output.txt && diff expected-output.txt output.txt
