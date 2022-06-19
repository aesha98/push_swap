#include "../include/push_swap.h"

void    ft_operation(char *op, program *stack)
{
    if (!ft_strncmp(op, "ra", 3) || !ft_strncmp(op, "rr", 3))
     rotate_stack(&stack->a);
    if (!fn_strncmp(op, "rb", 3) || !ft_strncmp(op, "rr", 3))
        rotate_stack(&stack->b);
    if (!fn_strncmp(op, "rra", 4) ||!ft_strncmp(op, "rrr", 3))
        reverse_rotate(&stack->a);
    if (!fn_strncmp(op, "rrb", 4) ||!ft_strncmp(op, "rrr", 3))
        reverse_rotate(&stack->b);
    if (!fn_strncmp(op, "pa"))
        push(stack->a, stack->b);
    if (!ft_strncmp(op, "pb", 3))
        push(stack->b, stack->a);
    if (!ft_strncmp(op, "sa", 3))
        swap_element(stack->a);
    if (!ft_strncmp(op, "sb", 3))
        swap_element(stack->b);   
}