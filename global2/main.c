#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"
#include "global.h"

int main()
{
//STACK_ARRAY

    int x=5;
    Stack s;
    CreateStack(&s);
    push(1,&s);
    push(2,&s);
    push(3,&s);
    push(4,&s);
    push(x,&s);
    traverseStack(&s,&display);
    printf("\n");
    pop(&x,&s);
    traverseStack(&s,&display);
    int y =stackSize(&s);
    printf("\n size =%d",y);
    stackClear;








    int K =3;
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
