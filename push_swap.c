#include "push_swap.h"

/*
** Handle sorting condition
*/
void  push_swap(stack *stack_a, stack *stack_b)
{
  if (stack_a->count > 3)
    find_max(stack_a);
  if (stack_a->count == 1)
    return ;
  else if (stack_a->count == 2)
    sort_two(stack_a);
  else if (stack_a->count == 3)
    three_random_sort(stack_a);
  else
    insertion_sort(stack_a, stack_b);
}

/*
** The main program
*/
int main(int argc, char *argv[])
{
  stack *stack_a;
  stack *stack_b;
  program mem;

  mem.is_memory = 0;

  if (!arrange(&argc, &argv, &mem)) //0
    write(1, "Error\n", 6);
  if (argc == 0)
    write(1, "Error\n", 6);
  if (!(check_arg(argc, argv))) // 0
    write(1, "Error\n", 6);
  if (!(stack_a = fill_stack(argc, argv)))//0
    write(1, "Error\n", 6);
  mem.stack_a = stack_a;
  if (!(stack_b = init_empty_stack()))//1
    free_stack(mem.stack_a);
  mem.stack_b = stack_b;
  if (!check_double(stack_a))//2
  {
    free_stack(mem.stack_b);
    write(1, "Error\n", 6);
  }
  if (is_sorted(stack_a, stack_b))//3
    return (EXIT_SUCCESS); 
  push_swap(stack_a, stack_b);
  return (EXIT_SUCCESS);
}

