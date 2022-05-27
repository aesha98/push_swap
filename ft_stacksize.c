#include "push_swap.h"

int ft_stacksize(struct stack *lst)
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
size_t ft_strlen(const char *str)
{
    size_t counter;

    counter = 0;
    while (*str++ != '\0')
    {
        counter++;
    }
    return (counter);
}