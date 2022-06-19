/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sitbinti <sitbinti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:03:33 by sitbinti          #+#    #+#             */
/*   Updated: 2022/06/16 20:15:20 by sitbinti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

/** The main program*/
int main(int argc, char *argv[])
{
  program stack;

  if (argc < 2) 
    return (0);
  stack.a = format_create_stack(argc, argv);
  stack.b = NULL;
  sort_stack(&stack);
  free_stack(&stack.a);
  free_stack(&stack.b);
  return (0);
}
