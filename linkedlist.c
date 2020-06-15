#include <stdio.h>
#include <stdlib.h>

#include "linkedlist_struct.h"
#include "linkedlist.h"


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

/**
 * This function displays the elements of the linked list in order from head to tail.
 * Example: If a linked list contains the elements 1,2,3 in this order with 1 at the head then
 * the display function will display the linked list as: 1 -> 2 -> 3 ->
 * 
 * The -> after 3 points to nothing to indicate that it is pointing to NULL
 * 
 * The function does not print anything in case the linked list is empty.
 * */
void display(List * list) {
  for(Node * current = list->head; current != NULL; current = current->next) {
    printf("%d -> ", current->data);
  }
}


/**
 * This functions adds an element at the end of the linked list.
 * */ 
void add(int data, List * list){
  // If the linked list is empty
  if(list->head == NULL){
    list->head = createnode(data);
  }
  else { // If there are elements present in the linked list
    Node * current = NULL;
    current = list->head; 
    while (current->next!=NULL){
      current = current->next;
    }
    current->next = createnode(data);
  }
}


// void delete(int data, List * list){
//   Node * current = list->head;            
//   Node * previous = current;           
//   while(current != NULL){           
//     if(current->data == data){      
//       previous->next = current->next;
//       if(current == list->head)
//         list->head = current->next;
//       free(current);
//       return;
//     }                               
//     previous = current;             
//     current = current->next;        
//   }                                 
// }  


/**
 * This function deletes the first occurrence of the node containing the data value in it.
 * NOTE: This function only uses a single pointer for the deletion.
 * */
void delete(int data, List * list){
  Node * finder = list->head;  // Finder will be used to find the first occurrence of the node containing the value data

  while(finder != NULL){
    if(finder->data == data){
      Node * temp = finder->next;  // temp points to the next node

      if(temp != NULL){ // If the node to delete is the first node or somewhere in-between in the linked list
        finder->data = temp->data;  // Copying the data from the next node to the current node
        finder->next = temp->next;  // Setting the next of the current node to the next value of the next node
        free(temp);
        temp = NULL;  // To avoid dangling pointers
      } else { // If the node to delete is the last node in the linked list
        free(finder);
        finder = NULL; // To avoid dangling pointers
      }
    }
    finder = finder->next;
  }
}


/**
 * This function reverses the given linked list.
 * The function does not do anything if the linked list passed in as the argument is empty.
 * */
void reverse(List * list){
  Node * previous = NULL;
  Node * current = list->head;
  Node * temp = NULL;
  while(current != NULL){
    temp = current->next;
    current->next = previous;
    previous = current;
    current = temp;
  }
  list->head = previous;
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
