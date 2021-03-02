typedef struct node{ int key; struct node *prev; struct node *next;} node;
typedef struct queue { node *front; node *rear; int size;} queue;
void init_queue(queue *que);
void push(queue *que, int item);
void pop(queue *que);
void front(queue *que);
void rear(queue *que);
void size(queue *que);
void empty(queue *que);
void task(queue *que);
void show(queue *que);
void free_queue(queue *que);
void empty_queue(queue *que);
