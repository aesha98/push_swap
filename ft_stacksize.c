#include "push_swap.h"

int ft_stacksize(struct Stack *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}