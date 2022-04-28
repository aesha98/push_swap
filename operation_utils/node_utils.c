#include "../push_swap.h"

/*create a new node */
/*create new node --to put in nodeutils.c*/
struct Stack *newNode(int element)
{
  struct Stack *stack;

  stack = malloc(sizeof(struct Stack));
  if (!stack)
  {
    free(stack);
    return (0);
  }

  stack->element = element;
  stack->next = NULL;
  return (stack);
}
