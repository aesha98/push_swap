#include "../push_swap.h"

void five_random_number(struct Stack** top, struct Stack** stack_b)
{
    struct Stack *stack_a;
    struct Stack *b;
    struct Stack *bottom;
    int counter;

    stack_a = *top;
    b = *stack_b;
    bottom = *top;
    while (bottom->next)
        bottom = bottom->next;
    counter = 0;
  
    push_b(top, stack_b);
    //display_stack(*stack_b);
    three_random_sort(top);
    push_a(stack_b, top);
    if (stack_a->element > bottom->element)
        rotate_stack(top);
    else
        push_a(stack_b, top);
    
    free(stack_a);
    free(bottom);
}