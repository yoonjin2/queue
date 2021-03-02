#include<stdio.h>
#include "queue.h"
void size(queue *que)
{
    printf("%d\n", que->size);
}
void empty(queue *que)
{
    if(que->size==0)
        puts("1");
    else
        puts("0");
}
