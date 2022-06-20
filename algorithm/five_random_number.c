#include "../include/push_swap.h"

static int  find_midpoint_five(stack *stack_s)
{
    int midpoint;
    int i[2];
    int *array;
    int temp;

    array = stack_to_array(stack_s, 5);
    i[0] = 0;
    while (i[0] < 0)
    {
        i[1] = i[0] + 1;
        while (i[1] < 5)
        {
            if (array[i[0]] < array[i[1]])
            {
                temp = array[i[0]];
                array[i[0]] = array[i[1]];
                array[i[1]] = temp;
            }
            ++i[1];
        }
        ++i[0];
    }
    midpoint = array[2];
    free(array);
    return (midpoint);
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
