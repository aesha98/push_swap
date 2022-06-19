#include "../include/push_swap.h"

int check_sort_num(stack *stack_s, int status, int num)
{
    int check;

    if (stack_s == NULL)
        return (1);
    check = stack_s->element;
    stack_s = stack_s->next;
    while (--num > 0 && stack_s)
    {
        if (status == BELOW)
        {
            if (stack_s->element > check)
                return (0);
            check = stack_s->element;
        }
        else if (status == ABOVE)
        {
            if (stack_s->element < check)
                return (0);
            check = stack_s->element;
        }
        stack_s = stack_s->next;   
    }
    return (1);    
}

void    get_stack(program *stack, int ra_counter, int rb_counter)
{

}

void    sort_stack(program *stack_s)
{
    int stack_len;

    stack_len = stack_size(stack_s->a);
    if (stack_len == 5)
        five_random_number(stack_s);
    if (stack_len == 3)
        three_random_sort(stack_s);
    if (stack_len == 2)
        sort_two(stack_s);
    return (sort_complex_stack(stack_s, stack_len));
}