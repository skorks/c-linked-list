#ifndef LINKEDLIST_HEADER
#define LINKEDLIST_HEADER

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node * next;
} Node;

typedef struct list {
  Node * head; 
} List;

List * emptylist();
void add(int data, List * list);
void delete(int data, List * list);
void display(List * list);
void reverse(List * list);
void destroy(List * list);

#endif

