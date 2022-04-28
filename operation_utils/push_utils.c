#include "../push_swap.h"

/*pa - push top element 
* stack b to stack a*/
void push_a(struct Stack** b, struct Stack** a)
{
    push(a, pop(b, free));
    printf("pa\n");
}

/*pb - push top element
* stack a to stack b*/
void push_b(struct Stack** a, struct Stack** b)
{
    push(b, pop(a, free));
    printf("pb\n");
}