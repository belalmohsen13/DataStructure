#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#include <stdlib.h>


#define QueueEntry int


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

void CreateQueue(Queue* pq);
int  Abstract(QueueEntry e,Queue *pq);
void serve(QueueEntry * pe,Queue * pq);
int  QueueEmpty(Queue * pq);

int  Queuesize(Queue * pq);
void ClearQueue(Queue * pq);
void TraverseQueue(void (*pf)(QueueEntry), Queue *pq);
void display(QueueEntry e);


#endif // _QUEUE_H

