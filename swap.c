#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp;
}

void	do_sa(t_stack *stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	do_sb(t_stack *stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	do_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
