#include "../push_swap.h"

int ft_min(int a, int b)
{
    if (a > b)
        return (b);
    else
        return (a);
}

int ft_max(int a, int b)
{
    if (a < b)
        return (b);
    else
        return (a);
}

int    find_min(stack *stack_s)
{
    node *element;

    stack_s->min = __INT_MAX__;
    element = stack_s->first;
    while(element)
    {
      if (stack_s->min > element->element)
      {
        stack_s->min = element->element;
      }
      element = element->next;
    }
    return (stack_s->min);
}

void find_max(stack *a)
{
    node *element;

    a->max = -2147483648;
    a->max_stack_a = -2147483648;
    a->max_stack_b = -2147483648;
    element = a->first;
    while (element->next)
    {
        if (element->element > a->max_stack_a && element->element != a->max)
        {
            a->max_stack_a = element->element;
        }
        element = element->next;
    }
    element = a->first;
    while (element->next)
    {
        if (element->element > a->max_stack_b && element->element != a->max)
        {
            a->max_stack_b = element->element;
        }
        element = element->next;
    }
    //return (a->max_stack_a);
}