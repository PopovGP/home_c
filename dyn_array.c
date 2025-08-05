#include <stdlib.h>

typedef int datatype;

typedef struct {
    int size;
    datatype  *item;
    int sp;
} stack;

void init_stack(stack *st)
{
    st->size = 4;
    st->sp = 0;
    st->item = malloc(st->size * sizeof(datatype));
}

void push(stack *st, datatype *value)
{
    
}

int main(void)
{
    stack st;
    init_stack(&st);
    
    return 0;
}
