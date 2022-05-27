#include "../push_swap.h"

/*shift DOWN all element by 1- the last node is first*/
void reverse_rotate(stack *stack_a)
{
    node *last;
    node *new_last;
    
    /*TODO : ERROR CHECKING FOR STACKSIZE*/
    if (stack_a->count <= 1)
        return ;
    
    last = stack_a->first; /*set last pointer point to first node*/
    while (last->next)
    {
        if (!last->next->next)
            new_last = last;
        last = last->next;
    }
    new_last->next = NULL;

    last->next = stack_a->first;
    stack_a->first = last;
}
