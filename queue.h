#ifndef _QUEUE_H_
#define _QUEUE_H_



typedef struct {
    int data;
    struct node* next;
}node;



typedef struct {
    node* head;
    node* tail;
}queue;



queue* init_queue();
void inQueue(queue* q, int data);
void deQueue(queue* q);
void printQueue(queue* q);


#endif