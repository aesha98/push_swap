#include "../push_swap.h"

/*insert node into stack*/
int push(stack *a, stack *b)
{
    if (b->count == 0)
        return (1);
    else if (!add_node(a, remove_node(b)))
        return (0);
    return (1);
}

/*pa - push top element 
* stack b to stack a*/
void push_a(stack *b, stack *a)
{
    if (!push(a, b))
        return ;
    write(1, "pa\n", 3);
}

/*pb - push top element
* stack a to stack b*/
void push_b(stack *a, stack *b)
{
    if (!push(b, a))
        return ;
    write(1, "pb\n", 3);
}