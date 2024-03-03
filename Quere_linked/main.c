#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    int x =3;
    Queue myqueue;
    CreateQueue(&myqueue);

    int error= Abstract(2,&myqueue);
    printf("retrun state =%d\n",error);
    error= Abstract(3,&myqueue);
    printf("retrun state =%d\n",error);
    error=Abstract(4,&myqueue);
    printf("retrun state =%d\n",error);

    int z= Queuesize(&myqueue);
    printf("size :%d\n",z);


    TraverseQueue(&display,&myqueue);// not working

    ClearQueue(&myqueue);
    z= Queuesize(&myqueue);
    printf("\nsize :%d",z);

    return 0;
}
