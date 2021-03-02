#include<stdlib.h>
#include "queue.h"
void empty_queue(queue *que)
{
    node *q=que->front->next;
    while(q->next!=que->rear)
    {
        free(q);
        q=q->next;
    }
    que->size=0;
}
void free_queue(queue *que)
{
    empty_queue(que);
    free(que->front);
    free(que->rear);
}
