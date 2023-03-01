#include "push_swap.h"


void	push(t_stack *stack_src, t_stack *stack_dst)
{
	stack_dst->stack[0] = stack_src->stack[0];
	
}


void	do_pa(t_stack *stack_b, t_stack *stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	do_pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
