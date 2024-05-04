struct StackItem {
  int value;
  struct StackItem* next;
};

struct StackItem* new(int what);
void del(struct StackItem* head);
void push_back(struct StackItem** to, int what);
int get_front(struct StackItem* head);
int get_back(struct StackItem* head);
int pop_front(struct StackItem** head);

int size(struct StackItem* head);
int is_empty(struct StackItem* head);
void print(struct StackItem* head);

