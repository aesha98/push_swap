#include "push_swap.h"

int ft_isdigit(int nb)
{
    if (nb >= '0' && nb <= '9')
        return (nb);
    return (0);
}

int ft_atoi(const char *str)
{
    int result;
    int sign;

    sign = 1;
    result = 0;
    while ((*str >= '\t' && *str <= '\r') || *str == ' ')
        ++str;
    if (*str == '+' || *str == '-')
    {
        if (*(str++) == '-')
            sign *= -1;
    }
    while (ft_isdigit(*str))
    {
        result = result * 10;
        result += (*str++ - '0');
    }
    return (sign * result);
}
