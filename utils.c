#include "push_swap.h"

int ft_is_order(t_stack *stack)
{
	int i;
	i = 0;
	
	while(i < (stack->size - 1) )
	{
		if(stack->stack[i] > stack->stack[i + 1])
			return (0);
		i++;
	}
	return(1);
}


int	ft_handler_error(char *msg, t_stack *stack)
{
	free(stack->stack);
	free(stack->copy);
	free(stack);
	ft_printf("Error\n %s", msg);
	exit (EXIT_FAILURE);
} 

int	ft_find_smaller(t_stack *stack)
{
	int	i;
	int	smaller;

	smaller = stack->stack[stack->size - 1];
	i = 0;
	while (i <= stack->size - 1)
	{
		if (stack->stack[i] < smaller)
			smaller = stack->stack[i];
		i++;
	}
	return (smaller);
}

int	ft_find_higher(t_stack *stack)
{
	int	i;
	int	higher;

	higher = stack->stack[stack->size - 1];
	i = 0;
	while (i <= stack->size - 1)
	{
		if (stack->stack[i] < higher)
			higher = stack->stack[i];
		i++;
	}
	return (higher);
}


