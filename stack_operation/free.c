/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitbinti <sitbinti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:39:15 by sitbinti          #+#    #+#             */
/*   Updated: 2022/06/17 18:39:17 by sitbinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void    free_stack(stack **s)
{
    stack   *ref;

    while(*s)
    {
        ref = (*s)->next;
        free(s);
        *s = ref;
    }
    *s = 0;
}