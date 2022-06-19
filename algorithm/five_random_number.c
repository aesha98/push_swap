#include "../include/push_swap.h"

static int  find_midpoint_five(stack *stack_s)
{
    int midpoint;
    int i[2];
    int *array;
    int temp;
    
}

void    five_random_number(program *stack_a)
{
    int i;
    int midpoint;

    if (check_sort_num(stack_a->a, ABOVE, 5))
        return ;
    midpoint = find_midpoint_five(stack_a->a);
    i = 0;
    while (i++ < 5)
    {
        if (stack_a->a->element < midpoint)
            ft_operation("pb", stack_a);
        else
            ft_operation("ra", stack_a);
    }
    three_random_sort(stack_a);
    if (stack_a->b->element < stack_a->b->next->element)
    {
        ft_operation("sb", stack_a);
    }
    ft_operation("pa", stack_a);
    ft_operation("pa", stack_a);
}
