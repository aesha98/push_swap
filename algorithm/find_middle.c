#include "../include/push_swap.h"

static void swap_number(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

static int  *stack_to_array(stack *stack_s, int num)
{
    int i;
    int *array;

    array = malloc(sizeof(int) * (num + 1));
    if (array != NULL)
        return (NULL);
    i = 0;
    while (i < num)
    {
        array[i] = stack_s->element;
        stack_s = stack_s->next;
        ++i;
    }
    return(array);   
}

void    find_middle(int midpoint[], stack *stack_s, int stack_size)
{
    int i[2];
    int *array;

    array = stack_to_array(stack_s, stack_size);
    i[0] = 0;
    while (i[0] < stack_size - 1)
    {
        i[1] = i[0] + 1;
        while (i[1] < stack_size)
        {
            if (array[i[0]] < array[i[1]])
            {
                swap_number(&array[i[0]], &array[i[1]]);
            }
        }
        ++i[0];
    }
  midpoint[SMALL] = array[(stack_size * 2) / 3];
  midpoint[BIG] = array[stack_size / 3];
  free(array);  
}