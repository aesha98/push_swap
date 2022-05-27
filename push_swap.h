#ifndef PUSH_SWAP
# define PUSH_SWAP
# define STACKINCREMENT 100

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"


/*node structure which consist of:
   element - data
   link - that points to next node*/

typedef struct Node
{
    int element;
    struct Node *next;
    int stacksize;
} node;

typedef struct Stack
{
    node *first;
    int count;
    int max;
    int max_stack_a;
    int max_stack_b;
    int min;
} stack;

typedef struct Operation
{
    int rb;
    int ra;
    int rra;
    int rrb;
    int nb_op;
    char op;
    int nb;
} operation;

typedef struct Program
{
    stack *stack_a;
    stack *stack_b;
    char **argv;
    int is_memory;
} program;

/*list operation function - list_utils.c*/
// bool empty_list(list L);
// status init_list(list *p_L);
// status delete(list *p_L, element data);

/*node operation function - node_utils.c*/
void  sa(stack *stack_a);
void  ra(stack *stack_a);
void  rb(stack *stack_b);
void  rra(stack *stack_a);
void  rrb(stack *stack_b);

/*create stack a*/
//void init_stack(struct Stack** top);
int add_node(stack *stack_s, int element);
stack *fill_stack(int argc, char **argv);
int check_double(stack *stack_s);
int is_sorted(stack *stack_a, stack *stack_b);
/*Push data to stack a - Unorganised*/
void push_a(stack *b, stack *a);
void push_b(stack *a, stack *b); 
int push(stack *a, stack *b);
void three_random_sort(stack *stack_a);
int check_arg(int argc, char **argv);
int arrange(int *argc, char ***argv, program *mem);
/*pop top element from stack */
int remove_node(stack *stack_s);
size_t	ft_strlen(const char *str);
void display_stack(stack *top);
int ft_strcmp(const char *str1, const char *str2);
void swap_element(stack *topp);
void swap_both(stack *b, stack *a);

void free_stack(stack *stack_s);
void free_arg(char **argv);
void sort_two(stack *stack_a);
/*Shift up all elements of stack a by 1.
The first element becomes the last one.*/
void reverse_rotate(stack *stack_a);
void free_node(struct Stack **top);
void init_stack(struct Stack **top);
void rotate_stack(stack *stack_a);

void stack_iterate(struct Stack **stack_a, struct Stack **stack_b);
stack *init_empty_stack(void);
void five_random_number(struct Stack** top, struct Stack** stack_b);
int stack_size(struct Stack *stack);
int ft_atoi(const char *str);
int ft_isdigit(int nb);
void swap(int *a, int *b);
size_t ft_strlen(const char *str);
char **ft_split(char const *s, char c);
void find_max(stack *a);

#endif
