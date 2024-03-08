#include "stack.h"


#if LIMITED_MEMORY ==1

void CreateStack(Stack* ps)
{
    ps->top=0;
}
int push(StackEntry e,Stack *ps)
{
    if(ps->top==MAXSIZE)
    {
        return 1;

    }
    else
    {
        ps->arr[ps->top]=e;
        ps->top++;
    }
}
int pop(StackEntry *pe,Stack *ps)
{
    if(ps->top==0)
    {
        return 1;

    }
    else
    {
        ps->top--;
        *pe=ps->arr[ps->top];
        return 0;

    }
}
int stackFull(Stack* ps)
{
    return(!(ps->top==MAXSIZE));
}
int stackEmpty(Stack* ps)
{
    return(!(ps->top==MAXSIZE));
}
int stackSize(Stack* ps)
{
    return(ps->top);
}
void stackClear(Stack* ps)
{
    ps->top=0;
}
void stackTop(StackEntry *pe,Stack *ps)
{
    *pe=ps->arr[ps->top-1];
}
void display(StackEntry e)
{
    printf("e=%d",e);
}
void traverseStack(Stack *ps,void (*pf)(StackEntry))
{
    for(int i =ps->top; i>0; i--)
    {
        (*pf)(ps->arr[i-1]);
    }
}

#elif LIMITED_MEMORY ==2
#include "stack.h"

void createStack(Stack *ps)  //createstack
{
    ps->top=NULL;
}



void push (StackEntry e,Stack *ps)   //push
{

    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
}
void stackTop (StackEntry *pe,Stack *ps) //stacktop
{
    *pe=ps->top->entry;
}
void pop (StackEntry *pe,Stack *ps)  //stackpop
{
    StackNode *pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top= ps->top->next;
    free(pn);
}
int stackEmpty(Stack *ps) //stackentry
{
    return (ps->top==NULL);
}
int stackFull(Stack *ps)  //stackfull
{
    return 0;
}
void stackClear(Stack *ps) //clearstack
{
    StackNode *pn=ps->top;
    StackNode *qn=ps->top;

    while(pn)
    {
        pn=pn->next;
        free(qn);
        qn=pn;
    }
    ps->top=NULL;
}
void display(StackEntry e) //display
{
    printf("e=%d",e);
}
void traverseStack(Stack *ps,void (*pf)(StackEntry e))   //traversestack
{

    StackNode *pn=ps->top;
    while(pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;

    }
}
int stackSize(Stack *ps) //stacksize
{
    int x;
    StackNode *pn=ps->top;

    for(x=0; pn; pn=pn->next)
    {
        x++;
    }
    return x;

}





#endif // LIMITED_MEMORY

