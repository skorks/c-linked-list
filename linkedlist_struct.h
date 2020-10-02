typedef struct node {
  int data;
  struct node * next;
} Node;

typedef struct list {
  Node * head; 
} List;
