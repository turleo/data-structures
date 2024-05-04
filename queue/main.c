#include <stdio.h>
#include "queue.h"

int main() {
  struct Queue q = new(10);
  print(q);
  for (int i = 0; i < 5; ++i) {
    push_back(&q, i);
  }
  print(q);
  printf("%d\n", pop_front(&q));
  print(q);
  printf("%d %d %d\n", size(q), is_empty(q), is_overflow(q));
  for (int i = 0; i < 10; ++i) {
    push_back(&q, i);
  }
  print(q);
  printf("%d %d %d\n", size(q), is_empty(q), is_overflow(q));
  for (int i = 0; i < 10; ++i) {
    printf("%d\n", pop_front(&q));
  }
  printf("%d %d %d\n", size(q), is_empty(q), is_overflow(q));
  del(q);
}
