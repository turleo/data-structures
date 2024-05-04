#include <stdio.h>
#include "heap.h"

int main() {
  struct Heap heap = empty();
  push(&heap, 7);
  push(&heap, 6);
  push(&heap, 8);
  push(&heap, 5);
  printf("%d\n", get_min(heap));

  printf("%d\n", pop_min(&heap));
  printf("%d\n", pop_min(&heap));
  printf("%d\n", pop_min(&heap));
  printf("%d\n", pop_min(&heap));
  printf("----------\n");

  int a[5] = {5, 2, 3, 4, 1};
  struct Heap arr = new(a, 5);
  printf("%d\n", pop_min(&arr));
  printf("%d\n", pop_min(&arr));
  printf("%d\n", pop_min(&arr));
  printf("%d\n", pop_min(&arr));
  push(&arr, 10);
  push(&arr, 40);
  push(&arr, 30);
  push(&arr, 20);
  printf("min: %d\n", get_min(arr));
  printf("%d\n", pop_min(&arr));
  printf("%d\n", pop_min(&arr));
  printf("%d\n", pop_min(&arr));
  printf("%d\n", pop_min(&arr));
  printf("%d\n", pop_min(&arr));

  int b[5] = {5, 2, 3, 4, 1};
  sort(b, 5);
  for (int i = 0; i < 5; ++i) {
    printf("%d, ", b[i]);
  }
  printf("\n");
}
