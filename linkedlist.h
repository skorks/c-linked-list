#ifndef LINKEDLIST_HEADER
#define LINKEDLIST_HEADER

#ifndef LINKED_STRUCT_HEADER
    #define LINKED_STRUCT_HEADER
    #include "linkedlist_struct.h"
#endif

List * makelist();
Node * createnode(int data);
void add(int data, List * list);
void delete(int data, List * list);
void display(List * list);
void reverse(List * list);
void destroy(List * list);

#endif
