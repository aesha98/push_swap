#include "../push_swap.h"

/*shift DOWN all element by 1- the last node is first*/
void reverse_rotate(struct Stack** node)
{
    struct Stack *last;
    struct Stack *new_last;
    
    /*TODO : ERROR CHECKING FOR STACKSIZE*/
    if (stack_size(*node) <= 1)
        return ;
    
    last = *node; /*set last pointer point to first node*/
    while (last->next)
    {
        if (!last->next->next)
            new_last = last;
        last = last->next;
    }
    new_last->next = NULL;

    last->next = *node;
    *node = last;
}
