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

// /* fill the initialize stack with data- unsorted*/
// stack *fill_stack(int argc, char **argv)
// {
//     int i;
//     int nb;
//     stack *stack_s;

//     i = argc;
//     stack_s = init_empty_stack();
//     if (!stack_s)
//     {
//         return (NULL);
//     }
//     while (--i >= 0)
//     {
//         nb = ft_atoi(argv[i]);
//         if (!add_node(stack_s, nb))
//         {
//             free_stack(stack_s);
//             return (NULL);
//         }
//     }
//     return (stack_s);
// }

// /*initialize the empty stack*/
// stack *init_empty_stack(void)
// {
//     stack *stack_s;

//     stack_s = (stack *)malloc(sizeof(stack));
//     if (!stack_s)
//         return (NULL);
//     stack_s->first = NULL;
//     stack_s->count = 0;
//     stack_s->min = 2147483647;
//     stack_s->max = -2147483648;
//     return (stack_s);   
// }

// /*
// ** Print out all the element in the stack.
// */
// void display_stack(stack *stack_s)
// {
//     node *element;

//     if(!stack_s)
//         return ;
//     element = stack_s->first;
//     while (element)
//     {
//         //printf("%d\n", element->element);
//         element = element->next;
//     }
//     printf("\n");
// }
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

