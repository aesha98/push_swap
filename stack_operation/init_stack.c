/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitbinti <sitbinti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:38:15 by sitbinti          #+#    #+#             */
/*   Updated: 2022/06/16 20:43:39 by sitbinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

stack *init_stack(int data)
{
    stack *ref;

    ref = malloc(sizeof(stack));
    if (ref == NULL) 
        return (0);
    ref->next = 0;
    ref->prev = 0;
    ref->element = data;
    return (ref);
}