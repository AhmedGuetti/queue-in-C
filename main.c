#include <stdio.h>
#include <stdlib.h>
#include "queue.h"




int main(){

queue* q = init_queue();
inQueue(q, 10);
inQueue(q, 75);
inQueue(q, 78);
inQueue(q, 9);
inQueue(q, 42);
inQueue(q, 45);
deQueue(q);
deQueue(q);
printQueue(q);


    return 0;
}