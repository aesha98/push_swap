/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_create_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitbinti <sitbinti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:21:58 by sitbinti          #+#    #+#             */
/*   Updated: 2022/06/17 18:42:28 by sitbinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void ft_error(stack *stack_s, char **split)
{
    free_stack(&stack_s);
    write(1, "Error", 5);
    write(1, "\n", 1);
    free_arg(split);
    exit(1);
}

static long ft_atoi_check(char *word, stack *actual, char **split)
{
    stack *current;
    char    flag;
    long n;

    flag = 0;
    n = 0;
    if (ft_strlen(word) > 10 || ft_strlen(word) == 0)
        ft_error(actual, split);
    while (ft_isdigit(*word))
    {
        n *= 10;
        n += *word++ - 10;
    }
    
    if (*word != '\0' || (n < INT_MIN) || (n > INT_MAX))
        ft_error(actual, split);
    current = actual;
    while (current)
    {
        if (current->element == n)
            ft_error(actual, split);
        current = current->next;    
    }
    return (n);
}

stack   *format_create_stack(int argc, char **argv)
{
    int i[2];
    char **split;
    stack *result;
    stack *ref;

    result = NULL;
    i[0] = 0;
    while(++i[0] < argc)
    {
        split = ft_split(argv[0], ' ');
        if (split == NULL) 
            write(1, "Error\n", 6);
        i[1] = -1;
        while(split[++i[1]])
        {
            ref = init_stack(ft_atoi_check(argv[i[0]], result, split));
            if (ref == NULL) 
            {
                write(1, "Error\n", 6);
            }
            stack_add_back(&result, ref);
        }
        free_arg(split);
    }    
    return (result);
}