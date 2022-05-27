#include "../push_swap.h"

/*Sort element in stack with three input size
   note: do not run this function if 
   list is sorted*/
void three_random_sort(stack *stack_a)
{
    int first;
    int second;
    int third;

    first = stack_a->first->element;
    second = stack_a->first->next->element;
    third = stack_a->first->next->next->element;
    if (first > second && second > third && first > third)
    {
        sa(stack_a);
        rra(stack_a);
    }
    else if (first < second && second > third && first < third)
    {
        rra(stack_a);
        sa(stack_a);
    }
    else if (first > second && second < third && first < third)
    {
		sa(stack_a);
    }
	else if (first < second && second > third && first > third)
    {
		rra(stack_a);
    }
	else if (first > second && second < third && first > third)
    {
		ra(stack_a);
    }
 
}

void sort_two(stack *stack_a)
{
    if (stack_a->first->element > stack_a->first->next->element)
    {
        sa(stack_a);
    }
    return ;
}