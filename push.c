#include "push_swap.h"

void	pop(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->stack[i] = 0;
}


void	push(t_stack *stack_x, t_stack *stack_y)
{
	int	i;

	i = stack_y->size - 1;
	while (i >= 0)
	{
		stack_y->stack[i + 1] = stack_y->stack[i];
		i--;
	}
	stack_y->stack[0] = stack_x->stack[0];
	pop(stack_x);
	stack_x->size--;
	stack_y->size++;
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
