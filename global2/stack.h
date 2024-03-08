#ifndef _STACK_H
#define _STACK_H

#include "global.h"

#if LIMITED_MEMORY ==1
typedef struct
{
    int top;
    StackEntry arr[MAXSIZE];
} Stack;

#elif LIMITED_MEMORY ==2
typedef struct StackNode
{
    StackEntry entry;
    struct StackNode *next;
} StackNode;

typedef struct Stack
{
    StackNode *top;
} Stack;

#endif // LIMITED_MEMORY

void CreateStack(Stack *ps);  //createstack

int push (StackEntry e,Stack *ps);   //push

void stackTop (StackEntry *pe,Stack *ps); //stacktop

int pop (StackEntry *pe,Stack *ps);  //stackpop

int stackEmpty(Stack *ps) ;//stackentry

int stackFull(Stack *ps) ; //stackfull

void stackClear(Stack *ps); //clearstack

void display(StackEntry e);  //display

void traverseStack(Stack *ps,void (*pf)(StackEntry e)) ;  //traversestack

int stackSize(Stack *ps); //stacksize





#endif // _STACK_H

