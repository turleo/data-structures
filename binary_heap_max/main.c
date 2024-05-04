#include <stdio.h>
#include "heap.h"

int main() {
  struct Heap heap = empty();
  push(&heap, 7);
  push(&heap, 6);
  push(&heap, 8);
  push(&heap, 5);
  printf("%d\n", get_max(heap));

  printf("%d\n", pop_max(&heap));
  printf("%d\n", pop_max(&heap));
  printf("%d\n", pop_max(&heap));
  printf("%d\n", pop_max(&heap));
  printf("----------\n");

  int a[5] = {1, 2, 3, 4, 5};
  struct Heap arr = new(a, 5);
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));

  push(&arr, 10);
  push(&arr, 40);
  push(&arr, 30);
  push(&arr, 20);
  printf("max: d\n", get_max(arr));
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));
  printf("%d\n", pop_max(&arr));

  int b[5] = {1, 2, 3, 4, 5};
  sort(b, 5);
  for (int i = 0; i < 5; ++i) {
    printf("%d, ", b[i]);
  }
  printf("\n");
}
