#include "../push_swap.h"

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

int ft_strcmp(const char *str1, const char *str2)
{
    while ((*str1 == *str2) && *str1)
    {
        str1++;
        str2++;
    }
    return (*(unsigned char *)str1 - *(unsigned char *)str2);
}