struct Heap {
  int size;
  int used;
  int* array;
};

struct Heap empty();                  
struct Heap new(int* array, int size);
int get_min(struct Heap heap);        
int pop_min(struct Heap* heap);       
void push(struct Heap* heap, int what);
int* sort(int* array, int size);      

