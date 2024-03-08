
#ifndef _STACK_H

#define _STACK_H
#include <stdio.h>
#include <stdlib.h>
#define StackEntry int
#define MAXSIZE 10

typedef struct
{
    int top;
    StackEntry arr[MAXSIZE];
} Stack;


void CreateStack(Stack* ps);
int push(StackEntry e,Stack *ps);
int pop(StackEntry *pe,Stack *ps);
int stackFull(Stack* ps);
int stackEmpty(Stack* ps);
int stackSize(Stack* ps);
void stackClear(Stack* ps);
void stackTop(StackEntry *pe,Stack *ps);
void display(StackEntry e);
void Traverse(Stack *ps,void (*pf)(StackEntry));


#endif // _STACK_H
