#include "../push_swap.h"

/*ra/rb/rr -- shift up->last element become first*/
void rotate_stack(stack *stack_a)
{
    node *first;
    node *last;

    if (stack_a->count <= 1)
        return ;
    last = stack_a->first;
    while (last->next)
        last = last->next;
    first = stack_a->first;
    stack_a->first = stack_a->first->next;
    first->next = NULL;
    last->next = first;
}
