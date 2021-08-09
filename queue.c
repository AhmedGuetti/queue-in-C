#include <stdio.h>
#include <stdlib.h>
#include "queue.h"



queue* init_queue(){
    queue* q = (queue*)malloc(sizeof(queue));
    q-> head = NULL;
    q-> tail = NULL;
    return q;
}
node* make_node(int data){
    node* newnode = (node*)malloc(sizeof(node));
    if (newnode == NULL) return NULL;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void inQueue(queue* q, int data){
    node* nnode = make_node(data);
    
    if (q->tail != NULL){
        q->tail->next = nnode;
    }
    q->tail = nnode;
    if(q->head == NULL){
        q->head = nnode;
    }
}
void deQueue(queue* q){
    if (q->head == NULL){
        return;
    }
    node* curr = q->head;
    q->head = q->head->next;
    free(curr);
    
}
void printQueue(queue* q){
    node* curr = q->head;
    while (curr->next != NULL)
    {
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("%d ",curr->data);
    printf("\n");

}