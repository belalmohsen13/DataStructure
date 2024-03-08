#include <stdio.h>
#include "stack.h"

int digital(char c)
{
    return (c >= '0' && c <= '9');
}

int precedence(char op1, char op2)
{
    if (op1 == '$')
        return 1;
    if ((op1 == '*') || (op1 == '/'))
        return (op2 != '$');
    if ((op1 == '+') || (op1 == '-'))
        return ((op2 != '*') && (op2 != '/') && (op2 != '$'));
    return 0;
}

int main()
{
    char infix[] = "5+3-4/4$4";
    char postfix[50];
    int i, j;
    int op, c;
    Stack s;
    CreateStack(&s);

    for (i = 0, j = 0; (c = infix[i]) != '\0'; i++)
    {
        if (digital(c))
            postfix[j++] = c;
        else
        {
            if (!stackEmpty(&s))
            {
                stackTop(&op, &s);
                while ((!stackEmpty(&s)) && (precedence(op, c)))
                {
                    pop(&op, &s);
                    postfix[j++] = op;
                    if (!stackEmpty(&s))
                    {
                        stackTop(&op, &s);
                    }
                }
            }
            push(c, &s);
        }
    }

    while (!stackEmpty(&s))
    {
        pop(&op, &s);
        postfix[j++] = op;
    }

    postfix[j] = '\0';

    printf("%s", postfix);

    return 0;
}
