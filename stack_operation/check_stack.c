#include "../include/push_swap.h"

/*
* Check if stack is sorted;
*/
int			is_sorted(stack *stack_a, stack *stack_b)
{
	int num;

    if (stack_b != NULL || stack_a == NULL)
        return (0);
    num = stack_a->element;
    while (stack_a)
    {
        if (num > stack_a->element)
            return (0);
        num = stack_a->element;
        stack_a = stack_a->next;
    }
    return (1);
}