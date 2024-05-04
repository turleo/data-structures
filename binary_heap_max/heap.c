#include <stdlib.h>
#include <string.h>
#include "heap.h"

#define parent(i) ((i - 1) / 2) 
#define left(i) (2 * i + 1)
#define right(i) (2 * i + 2)

void move_up(struct Heap* heap, int i) {
  while (i != 0 && heap->array[parent(i)] < heap->array[i]) { 
    int temp = heap->array[i];
    heap->array[i] = heap->array[parent(i)];
    heap->array[parent(i)] = temp;
    i = parent(i); 
  }
}

void move_down(struct Heap* heap, int i) {
  int largest = i;
  if (left(i) < heap->used &&
      heap->array[left(i)] > heap->array[i]) {
    largest = left(i);
  }
  if (right(i) < heap->used &&
      heap->array[right(i)] > heap->array[largest]) {
    largest = right(i);
  }
  if (largest != i) {
    int temp = heap->array[i];
    heap->array[i] = heap->array[largest];
    heap->array[largest] = temp;
    move_down(heap, largest);
  }
}



struct Heap empty() {
  return (struct Heap) {
    .size = 128,
    .used = 0,
    .array = calloc(sizeof(int), 128)
  };
}

struct Heap new(int* array, int size) {
  struct Heap heap = empty();
  memcpy(heap.array, array, sizeof(int) * size);
  heap.used = size;
  for (int i = 1; i < 128; ++i) {
    move_up(&heap, i);
  }
  return heap;
}

int* sort(int* array, int size) {
  struct Heap heap = new(array, size);
  for (int i = 0; i < size; ++i) {
    array[i] = pop_max(&heap);
  }
  free(heap.array);
  return array;
}


int get_max(struct Heap heap) {
  return heap.array[0];
}

int pop_max(struct Heap* heap) {
  int max = heap->array[0];
  heap->used--;
  heap->array[0] = heap->array[heap->used];
  move_down(heap, 0);
  return max;
}

void push(struct Heap* heap, int what) {
  if (heap->size == heap->used) {
    return;
  }

  int i = heap->used;
  heap->array[i] = what;
  move_up(heap, heap->used);
  heap->used += 1;
}


