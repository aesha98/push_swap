#include "../push_swap.h"

/*create a new node */
/*create new node --to put in nodeutils.c*/
int add_node(stack *stack_s , int element)
{
  node *new_node;

  new_node = (node *)malloc(sizeof(node));
  if (new_node == NULL)
  {
    free(stack_s);
    return (0);
  }

  new_node->element = element;
  new_node->next = stack_s->first;
  new_node->prev = NULL;
  if (new_node->element > stack_s->max)
  {
    stack_s->max = new_node->element;
  }
  if (new_node->element < stack_s->min)
    stack_s->min = new_node->element;
  if (stack_s->first != NULL) 
     stack_s->first->prev = new_node;
  stack_s->first = new_node;
  stack_s->count++;
  return (1);
}

/*remove first node from stack*/
int remove_node(stack *stack_s)
{
  int element;
  node *del;

  del = stack_s->first;
  element = del->element;
  stack_s->first = del->next;
  free(del);
  stack_s->count--;
  return (element);
}
