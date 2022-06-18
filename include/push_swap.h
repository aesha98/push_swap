/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitbinti <sitbinti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:27:26 by sitbinti          #+#    #+#             */
/*   Updated: 2022/06/17 18:36:01 by sitbinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define OP 1

#include "../libft/libft.h"

typedef struct s_stack
{
    int element;
    struct s_stack *next;
    struct s_stack *prev;
} stack;

typedef struct t_program
{
    stack *a;
    stack *b;
    int counter;
} program;

stack *init_stack(int data);

void free_arg(char **argv);
#endif
