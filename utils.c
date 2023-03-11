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

int	get_position(t_stack *stack_a, int moves, int value)
{
	int	i;

	i = 0;
	if (moves == 1)
		return (stack_a->size);
	while (i <= stack_a->size)
	{
		if (value < stack_a->stack[i] && value > stack_a->stack[i + 1])
			return (i);
		i++;
	}
	return (i);
}

int	get_moves(t_stack *stack_a, int value)
{
	int	moves;
	int	half;
	int	top_a;

	moves = 0;
	half = stack_a->size / 2;
	top_a = stack_a->size;
	if (value < stack_a->stack[top_a] && value > stack_a->stack[0])
		return (1);
	top_a--;
	while (top_a >= half)
	{
		moves++;
		if (value < stack_a->stack[top_a] && value > stack_a->stack[top_a + 1])
			break ;
		top_a--;
	}
	while (top_a < half)
	{
		if (value < stack_a->stack[top_a] && value > stack_a->stack[top_a + 1])
			break ;
		moves--;
		top_a--;
	}
	return (moves + 1);
}

