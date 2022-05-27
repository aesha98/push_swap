#include "../push_swap.h"

int total_word(char **argv)
{
    int i;
    
    i = 0;
    while (argv[i])
        i++;
    return (i);
}

int arrange(int *argc, char ***argv, program *mem)
{
    int i;

    i = 0;
    if (*argc == 2)
    {
        if (!(*argv = ft_split((*argv)[1], ' ')))
            return (0);
        *argc = total_word(*argv);
        mem->is_memory = 1;
        mem->argv = *argv;
    }
    else
    {
        while (i < *argc - 1)
        {
            (*argv)[i] = (*argv) [i + 1];
            i++;
        }
        (*argv)[i] = 0;
        (*argc)--;
    }
    return (1);
}