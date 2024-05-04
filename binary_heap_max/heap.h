struct Heap {
  int size;
  int used;
  int* array;
};

struct Heap empty();
struct Heap new(int* array, int size);
int get_max(struct Heap heap);        
int pop_max(struct Heap* heap);       
void push(struct Heap* heap, int what);
int* sort(int* array, int size);      

