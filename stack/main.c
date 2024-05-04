#include <stdio.h>
#include "stack.h"

int main() {
  struct StackItem* head = new(1);
  push_back(&head, 3);
  print(head);
  printf("%d\n", pop_front(&head));
  printf("%d\n", pop_front(&head));
  printf("%d\n", pop_front(&head));
  printf("%d\n", pop_front(&head));
  print(head);
  push_back(&head, 2);
  print(head);
  printf("%d\n", pop_front(&head));
  push_back(&head, 2);
  print(head);
  pop_front(&head);
  print(head);
  printf("%d\n", size(head));
  for (int i = 0; i < 10; ++i) {
    push_back(&head, i);
  }
  print(head);
  for (int i = 0; i < 10; ++i) {
    printf("%d\n", pop_front(&head));
  }
  printf("%d\n", size(head));
  for (int i = 0; i < 10; ++i) {
    push_back(&head, i);
  }
  del(head);
}
