#include "push_swap.h"

/* swap stack a */
void sa(stack *stack_a)
{
    swap_element(stack_a);
    write(1, "sa\n", 3);
}

/*rotate stack a*/
void  ra(stack *stack_a)
{
    rotate_stack(stack_a);
    write(1, "ra\n", 3);
}
/*reverse rotate stack a*/
void  rra(stack *stack_a)
{
    reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}

/*rotate stack b*/
void  rb(stack *stack_b)
{
    rotate_stack(stack_b);
    write(1, "rb\n", 3);
}

/*reverse rotate stack b*/
void  rrb(stack *stack_b)
{
    reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}