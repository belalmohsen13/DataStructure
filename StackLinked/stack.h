#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include <stdlib.h>

#define StackEntry int

typedef struct StackNode{
StackEntry entry;
struct StackNode *next;
}StackNode;

typedef struct Stack{
StackNode *top;
}Stack;

void createstack(Stack *ps);  //createstack

void push (StackEntry e,Stack *ps);   //push

void stacktop (StackEntry *pe,Stack *ps); //stacktop

void pop (StackEntry *pe,Stack *ps);  //stackpop

int stackempty(Stack *ps) ;//stackentry

int stackfull(Stack *ps) ; //stackfull

void stackclear(Stack *ps); //clearstack

void display(StackEntry e);  //display

void traversestack(Stack *ps,void (*pf)(StackEntry e)) ;  //traversestack

int stacksize(Stack *ps); //stacksize


#endif // _STACK_H
