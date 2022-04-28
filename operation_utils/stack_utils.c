#include "../push_swap.h"

 /*initialize stack to NULL*/
 /*initialised list to NULL(0)-empty stack */
void init_stack(struct Stack** top)
{
   *top = NULL;
}

/*insert node into stack*/
void push(struct Stack** top, int element)
{
    struct Stack *node = newNode(element); /*create node*/
    node->next = *top;  /*assign node at top stack*/
    *top = node;        /*put data into first node */
}

/*remove first node from stack*/
int pop(struct Stack** top, void(*del)(void*))
{
    int element_pop;
    if (!top)
        exit(0);
    struct Stack* temp = *top;  /*initialise ptr to top node*/
    *top = (*top)->next;        /*assign top pointer to next node*/
    element_pop = temp->element; /*point temp_node to the element */
    (*del)(temp);                /*pop or free node from stack*/
    return (element_pop);
}

/* count total node in stack*/
int stack_size(struct Stack* stack)
{
    int i;

    i = 0;
    while (stack)
    {
        i++;
        stack = stack->next;
    }
    return (i);
}

void display_stack(struct Stack* top)
{
    if(!top)
        exit(0);
    while (top->next)
    {
        printf("%d\n", top->element);
        top = top->next;
    }
}


