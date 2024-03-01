#include"stack.h"
int main(){
    int x=5;
Stack s;
CreateStack(&s);
push(1,&s);
push(2,&s);
push(3,&s);
push(4,&s);
push(x,&s);
Traverse(&s,&display);
printf("\n");
pop(&x,&s);
Traverse(&s,&display);
int y =stackSize(&s);
printf("\n size =%d",y);
stackClear;
    return 0;
}
