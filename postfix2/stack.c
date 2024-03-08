#include "stack.h"
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
    return 0;
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
void Traverse(Stack *ps,void (*pf)(StackEntry))
{
    for(int i =ps->top; i>0; i--)
    {
        (*pf)(ps->arr[i-1]);
    }
}


