#include "../push_swap.h"

/*
* check for double element in stack;
*/
int check_double(stack *stack_s)
{
    node *base;
    node *element;

    base = stack_s->first;
    while (base)
    {
        element = base->next;
        while (element)
        {
            if (element->element == base->element)
            {
               return (0);
            }
            element = element->next;
        }
        base = base->next;   
    }
    return (1);
}

/*
* Check if stack is sorted;
*/
int			is_sorted(stack *stack_a, stack *stack_b)
{
	node *actual;

	if (!stack_a->first)
		return (0);
	actual = stack_a->first;
	while (actual->next)
	{
		if (actual->element > actual->next->element)
			return (0);
		actual = actual->next;
	}
	if (stack_b->first != NULL)
		return (0);
	return (1);
}