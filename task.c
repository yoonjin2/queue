#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
void task(queue *que)
{
    char command[6]={'\0',};
    scanf("%s", command);
    if(strcmp(command,"pop")==0)
        pop(que);
    else if(strcmp(command,"size")==0)
        size(que);
    else if(strcmp(command,"empty")==0)
        empty(que);
    else if(strcmp(command,"back")==0)
        back(que);
    else if(strcmp(command,"front")==0)
        front(que);
    else if(strcmp(command,"push")==0)
    {
        int item;
        scanf("%d", &item);
        push(que,item);
    }
    else if(strcmp(command,"show")==0)
        show(que);
    else
        return;
}
