/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitbinti <sitbinti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:46:14 by sitbinti          #+#    #+#             */
/*   Updated: 2022/06/17 14:46:16 by sitbinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*shift DOWN all element by 1- the last node is first*/
void reverse_rotate(stack **stack_s)
{
    stack *last;
    
    /*TODO : ERROR CHECKING FOR STACKSIZE*/
    if (*stack_s == NULL || (*stack_s)->next == NULL)
        return ;
    last = bottom_stack(*stack_s);
    (*stack_s)->prev = last;
    last->prev->next = NULL;
    last->prev = NULL;
    last->next = (*stack_s);
    *stack_s = last;
}
