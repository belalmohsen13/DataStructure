#include"stack.h"
int main(){
    int x=5;
Stack s;
createstack(&s);
push(1,&s);
push(2,&s);
push(3,&s);
push(4,&s);
push(x,&s);
traversestack(&s,&display);
printf("\n");
pop(&x,&s);
traversestack(&s,&display);
int y =stacksize(&s);
printf("\n size =%d",y);
stackclear;
    return 0;
}
