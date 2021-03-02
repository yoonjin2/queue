#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "queue.h"
int main()
{
    queue que;
    init_queue(&que);
    int i, N;
    scanf("%d", &N);
    for(i=0;i<N;i++)
        task(&que);
    free_queue(&que);
    return 0;
}