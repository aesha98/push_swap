/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitbinti <sitbinti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:52:23 by sitbinti          #+#    #+#             */
/*   Updated: 2022/06/16 21:04:41 by sitbinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    stack_add_front(stack **stack_s, stack *to_add)
{
    if (*stack_s == NULL)
    {
        *stack_s = to_add;
        return ;
    }
    to_add->next = *stack_s;
    (*stack_s)->prev = to_add;
    *stack_s = to_add; 
}

void    stack_add_back(stack **stack_s, stack *element)
{
    stack *last;
    if (*stack_s == NULL)
    {
        *stack_s = element;
        return ;
    }
    last = bottom_stack(*stack_s);
    last->next = element;
    element->prev = last;
}

int stack_size(stack *stack_s)
{
    int size;

    size = 0;
    while(stack_s)
    {
        stack_s = stack_s->next;
        size++;
    }
    return (size);
}
/*
** go to last element in stack.
*/
stack   *bottom_stack(stack *stack_s)
{
    while(stack_s->next != NULL)
    {
        stack_s = stack_s->next;
    }
    return (stack_s);
}

