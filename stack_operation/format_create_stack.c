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
    //free_stack()
    write(1, "Error", 5);
    write(1, "\n", 1);
    free_arg(split);
    exit(1);
}

static  ft_atoi_check()
{
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
            ref = init_stack(ft_atoi_check());
            if (ref == NULL) 
            {
                write(1, "Error\n", 6);
            }
            push_to_back(&result, ref);
        }
        free_arg(split);
    }    
    return (result);
}