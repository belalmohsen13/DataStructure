#include "stack.h"

void createstack(Stack *ps)  //createstack
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
void stacktop (StackEntry *pe,Stack *ps) //stacktop
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
int stackempty(Stack *ps) //stackentry
{
    return (ps->top==NULL);
}
int stackfull(Stack *ps)  //stackfull
{
    return 0;
}
void stackclear(Stack *ps) //clearstack
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
void traversestack(Stack *ps,void (*pf)(StackEntry e))   //traversestack
{

    StackNode *pn=ps->top;
    while(pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;

    }
}
int stacksize(Stack *ps) //stacksize
{
    int x;
    StackNode *pn=ps->top;

    for(x=0; pn; pn=pn->next)
    {
        x++;
    }
    return x;

}


