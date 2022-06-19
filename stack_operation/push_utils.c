#include "../include/push_swap.h"

/*insert node into stack*/
void    push(stack **source, stack **destination)
{
    stack *head;

    if (*source == NULL)
        return ;
    head = *source;
    *destination = (*source)->next;
    if (*source)
        (*destination)->prev = NULL;
    if (*destination)
        (*source)->prev = NULL;
    head->next = *source;
    *source = head;
    (*source)->prev = NULL;
}