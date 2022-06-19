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
    stack *head;

    head = malloc(sizeof(stack));
    if (head == NULL) 
        return (0);
    head->next = 0;
    head->prev = 0;
    head->element = data;
    return (head);
}