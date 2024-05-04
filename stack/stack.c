#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

struct StackItem* new(int what) {
  struct StackItem* head = calloc(sizeof(struct StackItem), 1);
  head->value = what;
}

void del(struct StackItem* head) {
  if (is_empty(head)) {
    return;
  }
  struct StackItem* next = head->next;
  do {
    free(head);
    head = next;
  } while (next && (next = head->next));
}

void push_front(struct StackItem** head, int what) {
  struct StackItem* new = malloc(sizeof(struct StackItem));
  new->value = what;
  new->next = *head;
  *head = new;
}

void push_back(struct StackItem** to, int what) {
  if (is_empty(*to)) {
    push_front(to, what);
    return; 
  }
  struct StackItem* head = *to;
  while (head->next) {
    head = head->next;
  }
  head->next = calloc(sizeof(struct StackItem), 1);
  head->next->value = what;
}

int get_front(struct StackItem* head) {
  if (is_empty(head)) {
    return -1;
  }
  return head->value;
}

int get_back(struct StackItem* head) {
  if (is_empty(head)) {
    return -1;
  }
  while (head->next) {
    head = head->next;
  }
  return head->value;
}

int pop_front(struct StackItem** head) {
  if (is_empty(*head)) {
    return -1;
  }
  struct StackItem* n = (*head)->next;
  struct StackItem* cur = *head;
  *head = n;
  int val = cur->value;
  free(cur);
  return val;
}

int size(struct StackItem* head) {
  int s = 0;
  if (is_empty(head)) {
    return s;
  }

  while (head->next) {
    head = head->next;
    s++;
  }
  return s;
}

int is_empty(struct StackItem* head) {
  return head == 0;
}

void print(struct StackItem* head) {
  if (is_empty(head)) {
    return;
  }
  while (head->next) {
    printf("%d, ", head->value);
    head = head->next;
  }
  printf("%d\n", head->value);
}
