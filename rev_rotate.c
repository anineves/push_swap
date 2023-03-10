#include "push_swap.h"

void	rev_rotate(t_stack *stack)
{
	int	tmp;
	int	tmp2;

	tmp = stack->stack[stack->size - 1];
	tmp2 = stack->size - 1;
	while (tmp2 > 0)
	{
		stack->stack[tmp2] = stack->stack[tmp2 - 1];
		tmp2--;
	}
	stack->stack[tmp2] = tmp;
}

void	do_rra(t_stack *stack_a)
{
	rev_rotate(stack_a);
	ft_printf("rra\n");
}

void	do_rrb(t_stack *stack_b)
{
	rev_rotate(stack_b);
	ft_printf("rrb\n");
}

void	do_rrr(t_stack *stack_a, t_stack *stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_printf("rrr\n");
}
