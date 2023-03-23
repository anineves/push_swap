#include "push_swap.h"

long int	ft_atol(const char *str)
{
	long			res;
	int			signal;
	int			i;

	res = 0;
	signal = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((res * 10) + (str[i] - '0'));
		i++;
	}
	return (res * signal);
}

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

int	ft_get_position(t_stack *stack_a, int value)
{
	int	i;

	i = 0;
	while (i <= stack_a->size)
	{
		if (stack_a->stack[i] == value)
			return (i);
		i++;
	}
	return (i);
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
		if (stack->stack[i] > higher)
			higher = stack->stack[i];
		i++;
	}
	return (higher);
}


