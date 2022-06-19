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

#include "../libft/libft.h"
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define OP 1

# define ABOVE 1
# define BELOW 0

# define SMALL 0
# define BIG 1

#include <unistd.h>

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

/*sorting function*/
void    sort_stack(program *stack_s);
void sort_two(program *stack_a);
void three_random_sort(program *stack_a);
void    five_random_number(program *stack_a);
void    sort_complex_stack(stack **stack_a, int stack_size);
static int  *stack_to_array(stack *stack_s, int num);
int check_sort_num(stack *stack_s, int status, int num);
/*stack utility function*/
void    stack_add_front(stack **stack_s, stack *to_add);
void    stack_add_back(stack **stack_s, stack *element);
stack   *bottom_stack(stack *stack_s);
stack *init_stack(int data);
int stack_size(stack *stack_s);
int			is_sorted(stack *stack_a, stack *stack_b);
static void ft_error(stack *stack_s, char **split);
stack   *format_create_stack(int argc, char **argv);

/*free memory*/
void    free_stack(stack **s);
void free_arg(char **argv);

/*stack operation*/
void    ft_operation(char *op, program *stack);
void reverse_rotate(stack **stack_s);
void    push(stack **source, stack **destination);
void rotate_stack(stack **stack_a);
void swap_element(stack *stack_s);

#endif
