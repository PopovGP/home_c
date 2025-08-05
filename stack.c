#include <stdlib.h>
#include <stdio.h>



typedef int datatype;

typedef struct list
{
    datatype value;
    struct list *nextItem;
} stack; 

_Bool isEmptyStack(stack *);

void push(stack **p, datatype value)
{
    stack *ptmp = malloc(sizeof(stack));
    ptmp->value = value;
    ptmp->nextItem = *p;
    
    *p = ptmp;
    
}

datatype pop(stack **p)
{
    
    if (isEmptyStack(*p))
    {
        exit(1); //
    }
    
    stack *ptmp = *p;
    datatype value = (*p)->value;
    
    *p = (*p)->nextItem==NULL ? NULL: (*p)->nextItem;
    
    free(ptmp);
    
    return value;
}

_Bool isEmptyStack(stack *p)
{
    return p==NULL;
}

int main(void)
{
    stack *myStack = NULL;
    push(&myStack, 1);
    push(&myStack, 8);
    push(&myStack, 4);
    printf("%d\n", pop(&myStack));
     printf("%d\n", pop(&myStack));
      printf("%d\n", pop(&myStack));

    return 0;
}
