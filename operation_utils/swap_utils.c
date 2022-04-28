#include "../push_swap.h"

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*sa or sb- swap top element 
* stack a or stack b*/
void swap_element(struct Stack* topp)
{
    struct Stack* temp;

    if (stack_size(topp) < 1)
        return ;
    temp = topp;
    swap(&temp->element, &temp->next->element);
}

/*ss - swap both a & b */
void swap_both(struct Stack *b, struct Stack *a)
{
    swap_element(a);
    swap_element(b);
}