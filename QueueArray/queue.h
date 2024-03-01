#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#include <stdlib.h>

#define MaxSize 5
#define QueueEntry int


typedef struct {
    int Front;
    int Rear;
    int Size;
    QueueEntry arr[MaxSize];
} Queue;

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
