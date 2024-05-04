#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "queue.h"

struct Queue new(int size) {
  return (struct Queue) {
    .size = size,
    .pointer = 0,
    .array = calloc(sizeof(int), size)
  };
}

void del(struct Queue q) {
  free(q.array);
}

void push_back(struct Queue* q, int what) {
  q->array[q->pointer] = what;
  q->pointer++;
}

int pop_front(struct Queue* q) {
  int ret = q->array[0];
  memmove(q->array, q->array + 1, q->pointer * sizeof(int));
  q->pointer--;
  return ret;
}

int get_front(struct Queue q) {
  return q.array[0];
}

int size(struct Queue q) {
  return q.pointer;
}

int is_empty(struct Queue q) {
  return q.pointer == 0;
}

int is_overflow(struct Queue q) {
  return q.pointer > q.size;
}

int print(struct Queue q) {
  for (int i = 0; i < q.pointer; ++i) {
    printf("%d, ", q.array[i]);
  }
  printf("\n");
}
