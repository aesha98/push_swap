#include "../push_swap.h"

/*ra/rb/rr -- shift up->last element become first*/
void rotate_stack(struct Stack** node)
{
    struct Stack *first;
    struct Stack *last;

    if (stack_size(*node) <= 1)
        return ;
    last = *node;
    while (last->next)
        last = last->next;
    first = *node;

    *node = (*node)->next;
    first->next = NULL;
    last->next = first;
}
