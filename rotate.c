#include "push_swap.h"

void	rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->stack[i];
	while (i < stack->size -1 )
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->stack[i] = tmp;
}

void	do_ra(t_stack *stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	do_rb(t_stack *stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	do_rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
