#include <stdlib.h>
#include <stdio.h>



typedef int datatype;

typedef struct list
{
    datatype value;
    struct list *nextItem;
} queue; 

_Bool isEmptyQueue(queue *);

void enqueue(queue **p, datatype value)
{
    queue *ptmp = *p;
    queue *elem = malloc(sizeof(queue));
    elem->value = value;
    elem->nextItem = NULL;
    
    if (isEmptyQueue(*p))
    {   
        *p = elem;
        return;
        
    }
        
    while(ptmp->nextItem)
        ptmp = ptmp->nextItem;
        
    ptmp;
    
}

datatype dequeue(queue *p)
{
    
    if (isEmptyQueue(p))
    {
        exit(1); //
    }
    
    queue *ptmp = p;
    while (ptmp)
        *ptmp = (*ptmp)->nextItem;
   
    datatype value = (*ptmp)->value;
    
   // *p = (*p)->nextItem==NULL ? NULL: (*p)->nextItem;
    
    free(ptmp);
    
    return value;
}

_Bool isEmptyQueue(queue *p)
{
    return p==NULL;
}

int main(void)
{
    queue *myQueue = NULL; //Указатель всегда указывает начало очереди на "хвост" уезжает правее
    //слева цепляем "вагончик" - это стек, двигаем голову.
    //теперь двигаем "хвост", т.е. удлинняем хвост.
    
    enqueue(&myQueue, 1);
    enqueue(&myQueue, 8);
    enqueue(&myQueue, 4);
    printf("%d\n", enqueue(&myQueue));
    printf("%d\n", enqueue(&myQueue));
    printf("%d\n", enqueue(&myQueue));

    
    return 0;
}
