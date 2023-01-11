#include <stdio.h>
#include <stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *sp)
{
    if (sp->top == sp->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *sp, int element)
{
    if (isFull(sp))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = element;        
    }
}

int pop(struct stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    int elem = sp->arr[sp->top];
    sp->top--;
    return elem;
}

int peek(struct stack *sp, int ind)
{
    int arrayInd = sp->top - ind + 1;
    if (arrayInd > sp->top || arrayInd < 0)
    {
        printf("Invalid Position!\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}

int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}

int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("Is Empty: %d\n", isEmpty(sp));
    printf("Is Full: %d\n", isFull(sp));

    push(sp, 22);
    push(sp, 23);
    push(sp, 24);
    push(sp, 25);
    push(sp, 26);
    push(sp, 27);
    push(sp, 28);
    push(sp, 29);
    push(sp, 30);
    push(sp, 31);
    push(sp, 32);

    printf("Your popped element: %d\n", pop(sp));
    printf("Your popped element: %d\n", pop(sp));
    printf("Your popped element: %d\n", pop(sp));

    printf("The element at position 2 is: %d\n", peek(sp, 2));
    printf("The element at position 11 is: %d\n", peek(sp, 11));
    printf("Topmost element: %d\n", stackTop(sp));
    printf("Bottommost element: %d\n", stackBottom(sp));

    return 0;
}