#include "../include/push_swap.h"

/*sa or sb- swap top element 
* stack a or stack b*/
void swap_element(stack *stack_s)
{
   int element;

   if (stack_s == NULL || stack_s->next == NULL)
        return ;
   element = stack_s->element;
   stack_s->element = stack_s->next->element;
   stack_s->next->element = element;
}