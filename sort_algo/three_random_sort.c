#include "../push_swap.h"

/*Sort element in stack with three input size
   note: do not run this function if 
   list is sorted*/
void three_random_sort(struct Stack** top)
{
    struct Stack *middle;
    struct Stack *bottom;

    middle = *top;
    bottom = *top;

    while (bottom->next)
        bottom = bottom->next;
    middle = middle->next;

        /*CASE 1 : 2 1 3*/
    if (((*top)->element > middle->element) && (middle->element < bottom->element) && (bottom->element > (*top)->element))
    {
        swap_element(*top);
        printf("sa\n");

    }  /*CASE 2:  */
    else if (((*top)->element > middle->element) && (middle->element > bottom->element) && (bottom->element < (*top)->element))
    {
        swap_element(*top);
        printf("sa\n");
        reverse_rotate(top);
        printf("rra\n");
    }  /*CASE 3 : */
    else if (((*top)->element > middle->element) && (middle->element < bottom->element) && (bottom->element < (*top)->element))
    {
        rotate_stack(top);
        printf("ra\n");
    }
    else if (((*top)->element < middle->element) && (middle->element > bottom->element) && (bottom->element > (*top)->element))
    {
        swap_element(*top);
        printf("sa\n");
        rotate_stack(top);
        printf("ra\n");
    }
    /*middle > bottom 1 3 2 --> 1 2 3 OK */
    else if (((*top)->element < middle->element) && (middle->element > bottom->element) && (bottom->element < (*top)->element))
    {
        reverse_rotate(top);
        printf("ra\n");
    }
    free(middle);
    free(bottom);
}