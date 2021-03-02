#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
void pop(queue *que)
{
    if(que->size==0)
    {
        puts("-1");
        return ;
    }
    else
    {
        node *q=que->front->next;
        que->front->next=que->front->next->next;
        que->front->next->prev=que->front;
        printf("%d\n", q->key);
        free(q);
        que->size--;
    }
}
