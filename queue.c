#include <stdio.h>
#include "queue.h"
void show(queue *que)
{
    node *t=que->front->next;
    while(t!=que->rear)
    {
        printf("%d\n", t->key);
        t=t->next;
    }
}
