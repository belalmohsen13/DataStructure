#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    int x =3;
    Queue myqueue;
    CreateQueue(&myqueue);

    Abstract(2,&myqueue);
    Abstract(3,&myqueue);
    Abstract(4,&myqueue);

    int z= Queuesize(&myqueue);
    printf("size :%d\n",z);

    z= Front(&myqueue);
    printf("front :%d\n",z);

    z= Rear(&myqueue);
    printf("rear : %d\n",z);

    ClearQueue(&myqueue);
    z= Queuesize(&myqueue);
    printf("size :%d",z);

    return 0;
}
