#include "../include/push_swap.h"

/*ra/rb/rr -- shift up->last element become first*/
void rotate_stack(stack **stack_a)
{
    stack *head;

    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return ;
    head = *stack_a;
    *stack_a = (*stack_a)->next;
    (*stack_a)->prev = NULL;
    head->next = NULL;
    head->prev = bottom_stack(*stack_a);
    head->next->next = head;
}
