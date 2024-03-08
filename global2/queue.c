#include "queue.h"

#if LIMITED_MEMORY ==1

void CreateQueue(Queue * pq)
{
    pq->Front=0;
    pq->Rear=-1;
    pq->Size=0;
}
void Abstract(QueueEntry e,Queue *pq)
{
    if((pq->Size==MAXSIZE-1))
    {
        pq->Rear=0;

    }
    else
    {
        pq->Rear++;
    }
    pq->arr[pq->Rear]=e;
    pq->Size++;
}
void serve(QueueEntry * pe,Queue * pq)
{
    *pe=(pq->arr[pq->Front]);
    if((pq->Size==(MAXSIZE-1)))

    {
        pq->Front=0;

    }
    else
    {
        pq->Front++;
    }

    pq->Size--;
}

int QueueEmpty(Queue * pq)
{
    return !pq->Size;

}
int Queuefull(Queue * pq)
{
    return (pq->Size==MAXSIZE-1);

}

void ClearQueue(Queue * pq)
{
    pq->Front=0;
    pq->Rear=-1;
    pq->Size=0;

}

int Queuesize(Queue * pq)
{
    return(pq->Size);

}

void TraverseQueue(void (*pf)(QueueEntry), Queue *pq)
{
    int pos,s;

    for(pos=pq->Front,s=0; s<(pq->Size); s++)
    {
        (*pf)(pq->arr[pos]);

        pos=(pos+1)%MAXSIZE;
    }

}
int Front(Queue* pq)
{
    return (pq->Front);

}
int Rear(Queue* pq)
{
    return (pq->Rear);

}
#elif LIMITED_MEMORY ==2


void CreateQueue(Queue* pq)
{
    pq->Front=NULL;
    pq->Rear=NULL;
    pq->Size=0;

}

int  Abstract(QueueEntry e,Queue *pq)
{
    QueueNode *pn=((QueueNode*)malloc(sizeof(QueueNode)));
    if(!pn)
    {
        return 0;
    }
    else
    {
        pn->next=NULL;
        pn->entry=e;

        if(!pq->Rear)
        {
            pq->Front=pn;
        }
        else
        {
            pq->Rear->next=pn;
        }
        pq->Rear=pn;
        pq->Size++;
        return 1;
    }

}
void serve(QueueEntry * pe,Queue * pq)
{
    QueueNode *pn=pq->Front;
    *pe=pn->entry;
    pq->Front=pq->Front->next;
    free(pn);
    if(!pq->Front)
        pq->Rear=NULL;

    pq->Size--;

}
int QueueEmpty(Queue * pq)
{
    return !pq->Front;

}

int Queuefull(Queue * pq)
{
    return 0;

}
int Queuesize(Queue * pq)
{
    return(pq->Size);

}


void ClearQueue(Queue * pq)

{
    while(pq->Front)
    {

        pq->Rear=pq->Front->next;
        free(pq->Front);
        pq->Front=pq->Rear;
    }
    pq->Size=0;

}

void TraverseQueue(void (*pf)(QueueEntry), Queue *pq)
{
    QueueNode *pn=pq->Front;
    for(pn; pn; pn=pn->next)
    {

        (*pf)(pn->entry);
    }

}

void display(QueueEntry e)
{
    printf("e=%d",e);
}







#endif // LIMITED_MEMORY


