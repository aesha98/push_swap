#ifndef PUSH_SWAP
# define PUSH_SWAP
# define STACKINCREMENT 100

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

/*abstract data type*/
typedef enum {OK, ERROR} status;
typedef enum {TRUE = 1, FALSE = 0} bool;
//typedef int element;


/*node structure which consist of:
   element - data
   link - that points to next node*/

struct Stack
{
    int element;
    struct Stack *next;
};

struct program
{
    int *number;

} t_program;

/*list operation function - list_utils.c*/
// bool empty_list(list L);
// status init_list(list *p_L);
// status delete(list *p_L, element data);

/*node operation function - node_utils.c*/

/*create stack a*/
//void init_stack(struct Stack** top);
struct Stack *newNode(int element);

/*Push data to stack a - Unorganised*/
void push_a(struct Stack** b, struct Stack** a);
void push_b(struct Stack** a, struct Stack** b); 
void push(struct Stack **top, int element);
void three_random_sort(struct Stack **top);

/*pop top element from stack */
int pop(struct Stack **top, void (*del)(void *));

void display_stack(struct Stack* top);

void swap_element(struct Stack* topp);
void swap_both(struct Stack *b, struct Stack *a);

/*Shift up all elements of stack a by 1.
The first element becomes the last one.*/
void reverse_rotate(struct Stack **stack);

void rotate_stack(struct Stack** node);

void stack_iterate(struct Stack **stack_a, struct Stack **stack_b);

void five_random_number(struct Stack** top, struct Stack** stack_b);
void three_random_sort(struct Stack **top);
int stack_size(struct Stack *stack);
int ft_atoi(const char *str);
int ft_isdigit(int nb);
void swap(int *a, int *b);

#endif
