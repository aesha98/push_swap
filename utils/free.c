#include "../push_swap.h"

void free_arg(char **argv)
{
    int i;

    i = -1;
    while (argv[++i])
    {
        free(argv[i]);
    }
    free(argv);
}

void free_stack(stack *stack_s)
{
    node *element;
    node *next;
    while (stack_s && stack_s->first)
    {
        element = stack_s->first;
        next = stack_s->first;
        while (next->next)
        {
            element = next;
            next = next->next;
        }
        if (element == next)
        {
            free(stack_s->first);
            stack_s->first = NULL;
        }
        else
        {
            element->next = NULL;
            free(next);
        }
        
        
    }
    free(stack_s);
}