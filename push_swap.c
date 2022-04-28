#include "push_swap.h"

int main(int argc, char *argv[])
{
  int num[6] = {3, 4, 2, 5, 1}; //list of integer
  struct Stack* stack_a;
  struct Stack* stack_b;
  char* number;
  stack_a = NULL;
  int i;
  int counter;
  i = -1;

  //t_program.number = (int *)malloc(sizeof(int) * i);

/*----------------DEBUG ONLY -------------------*/
  if (argc >= 2)
  {
    printf("Number of arguement: %d\n", argc);
    counter = 0;
    while (counter++ < argc - 1)
    {
      printf("\nargv[%d]: %s", counter, argv[counter]);
    
    }
    
  }
  /*-------------------------------------*/


  /*TODO: fetch argv[1] as list of integer
    if check_arguement:
     -sorted
     -duplicate value
     -bigger than int max
     -non-int data type
      return ERROR
    else
      initialise stacking
    */
     
  /*TODO: push int from list to stack - unsorted*/
  printf("\nInitialise Stack A:\n"); 
  while (num[i] > 0)
  {
    push(&stack_a, num[i++]);
  }

  stack_b = NULL;
  printf("\nStack A:\n");
  display_stack(stack_a);

  // printf("\nStack B:\n");
  // push_b(&stack_a, &stack_b);
  // push_b(&stack_a, &stack_b);
  // push_b(&stack_a, &stack_b);
  // //printf("Pop %d from stack\n", pop(&stack_a, free));
  
  // display_stack(stack_b->next->next);

  // printf("\nStack Temp:\n");
  // push_b(&stack_b, &temp);
  // push_b(&stack_b, &temp);
  // push_b(&stack_b, &temp);

  // printf("\nElement in Temp:\n");
  // display_stack(temp);
  // display_stack(temp->next);
  // display_stack(temp->next->next);

  //  printf("\nPush to stack A:\n");
  // push_a(&temp, &stack_a);
  // push_a(&temp, &stack_a);
  // push_a(&temp, &stack_a);

  // printf("\nElement in A:\n");
  // display_stack(stack_a);
  // display_stack(stack_a->next);
  // display_stack(stack_a->next->next);

   printf("\nSort..\n");
   five_random_number(&stack_a, &stack_b);
   printf("\nStack A new order:\n");
   display_stack(stack_a);
  //swap_element(stack_a);
  //printf("swap element\n");
  //swap_a(stack_a);
  //display_stack(stack_a->next->next);
  //push_a(&stack_b, &stack_a);
  //display_stack(stack_a);
  return 0;
}

