#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
void push(queue *que, int item)
{
    node *q;
    if((q=(node *)malloc(sizeof(node)))==NULL)
        return ;
    else
    {
        q->key=item;
        que->rear->prev->next=q;
        q->prev=que->rear->prev;
        que->rear->prev=q;
        q->next=que->rear;
    }
    que->size++;
}
