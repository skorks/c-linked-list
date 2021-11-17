#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct node {
  int data;
  struct node * next;
};

struct list {
  Node * head; 
};

Node * createnode(int data);

Node * createnode(int data){
  Node * newNode = malloc(sizeof(Node));
  if (!newNode) {
    return NULL;
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

List * makelist(){
  List * list = malloc(sizeof(List));
  if (!list) {
    return NULL;
  }
  list->head = NULL;
  return list;
}

void display(List * list) {
  Node * current = list->head;
  if(list->head == NULL) 
    return;
  
  for(; current != NULL; current = current->next) {
    printf("%d\n", current->data);
  }
}

void add(int data, List * list){
  Node * current = NULL;
  if(list->head == NULL){
    list->head = createnode(data);
  }
  else {
    current = list->head; 
    while (current->next!=NULL){
      current = current->next;
    }
    current->next = createnode(data);
  }
}

void delete(int data, List * list){
  Node * current = list->head;            
  Node * previous = current;           
  while(current != NULL){           
    if(current->data == data){      
      previous->next = current->next;
      if(current == list->head)
        list->head = current->next;
      free(current);
      return;
    }                               
    previous = current;             
    current = current->next;        
  }                                 
}                                   

void reverse(List * list){
  Node * reversed = NULL;
  Node * current = list->head;
  Node * temp = NULL;
  while(current != NULL){
    temp = current;
    current = current->next;
    temp->next = reversed;
    reversed = temp;
  }
  list->head = reversed;
}
//Reversing the entire list by changing the direction of link from forward to backward using two pointers
void reverse_using_two_pointers(List *list){
    Node *previous = NULL;
    while (list->head)
    {
        Node *next_node = list->head->next; //points to second node in list
        list->head->next = previous;//at initial making head as NULL
        previous = list->head;//changing the nextpointer direction as to point backward node 
        list->head = next_node; //moving forward by next node
    }
    list->head=previous;
}
void destroy(List * list){
  Node * current = list->head;
  Node * next = current;
  while(current != NULL){
    next = current->next;
    free(current);
    current = next;
  }
  free(list);
}
