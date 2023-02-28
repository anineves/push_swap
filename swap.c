#include "push_swap.h"

static void	ft_swap(t_stack *stack)
{
	int	tmp;

	if (stack == NULL)
		return ;
	tmp = stack->stack[0];
	stack->stack[1] = stack->stack[0];
	stack->stack[0] = tmp;
}
