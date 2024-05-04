struct Queue {
  int size;
  int pointer;
  int* array;
};

struct Queue new(int size);
void del(struct Queue);
void push_back(struct Queue* q, int what);
int pop_front(struct Queue* q);
int get_front(struct Queue q);

int size(struct Queue q);
int is_empty(struct Queue q);
int is_overflow(struct Queue q);
int print(struct Queue q);

