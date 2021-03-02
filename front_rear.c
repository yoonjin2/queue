
#include <stdio.h>
#include "queue.h"
void front(queue *que)
{
    if(que->size==0)
        puts("-1");
    else
        printf("%d\n",que->front->next->key);
}
void back(queue *que)
{
    if(que->size==0)
        puts("-1");
    else
        printf("%d\n",que->rear->prev->key);
}
