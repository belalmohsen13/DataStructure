#include "queue.h"
void CreateQueue(Queue * pq)
{
    pq->Front=0;
    pq->Rear=-1;
    pq->Size=0;
}
void Abstract(QueueEntry e,Queue *pq)
{
    if((pq->Size==MaxSize-1))
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
    if((pq->Size==(MaxSize-1)))

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
    return (pq->Size==MaxSize-1);

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

        pos=(pos+1)%MaxSize;
    }

}
int Front(Queue* pq){
    return (pq->Front);

}
int Rear(Queue* pq){
    return (pq->Rear);

}

