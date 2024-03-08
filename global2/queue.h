#ifndef _QUEUE_H
#define _QUEUE_H

#include "global.h"

#if LIMITED_MEMORY ==1

typedef struct {
    int Front;
    int Rear;
    int Size;
    QueueEntry arr[MAXSIZE];
} Queue;

#elif  LIMITED_MEMORY ==2
typedef struct QueueNode
{
    struct QueueNode *next;
    QueueEntry entry;
} QueueNode;

typedef struct Queue
{
    QueueNode *Front;
    QueueNode *Rear;
    int Size;

} Queue;

#endif // LIMITED_MEMORY

void CreateQueue(Queue* pq);
void Abstract(QueueEntry e,Queue *pq);
void serve(QueueEntry * pe,Queue * pq);
int QueueEmpty(Queue * pq);

int Queuesize(Queue * pq);
void ClearQueue(Queue * pq);
void TraverseQueue(void (*pf)(QueueEntry), Queue *pq);

int Front(Queue* pq);
int Rear(Queue* pq);

#endif // _QUEUE_H
