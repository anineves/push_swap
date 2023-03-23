#include "push_swap.h"

void	ft_sort_three(t_stack *stack)

{	
	if (ft_is_order(stack) != 1)
	{
		if (stack->stack[0] < stack->stack[1] && stack->stack[0] < stack->stack[2]
		&& stack->stack[1] > stack->stack[2])
		{
			do_sa(stack);
			do_ra(stack);
		}
		else if (stack->stack[0] > stack->stack[1] && stack->stack[0] < stack->stack[2]
			&& stack->stack[1] < stack->stack[2])
			do_sa(stack);
		else if (stack->stack[0] < stack->stack[1] && stack->stack[0] > stack->stack[2]
			&& stack->stack[1] > stack->stack[2])
			do_rra(stack);
		else if (stack->stack[0] > stack->stack[1] && stack->stack[0] > stack->stack[2]
			&& stack->stack[1] > stack->stack[2])
		{	
			do_sa(stack);
			do_rra(stack);
	}
	else if (stack->stack[0] > stack->stack[1] && stack->stack[0] > stack->stack[2]
		&& stack->stack[1] < stack->stack[2])
		do_ra(stack);
	}
}

void ft_sort_five(t_stack *stack_a, t_stack *stack_b)

{
	int	small;
	int	t;

	small = 0;
	t = stack_a->size;
	while (stack_a->size > 3)
	{
		small = ft_find_smaller(stack_a);
		if (stack_a->stack[1] == small)
			do_sa(stack_a);
		else if (stack_a->stack[2] == small)
		{
			do_ra(stack_a);
			do_ra(stack_a);
		}
		else if (stack_a->stack[stack_a->size - 2] == small)
		{
			do_rra(stack_a);
			do_rra(stack_a);
		}
		else if (stack_a->stack[stack_a->size - 1] == small)
		{
			do_rra(stack_a);
		}
		do_pb(stack_a, stack_b);

	}
	ft_sort_three(stack_a);
	do_pa(stack_b, stack_a);
	if ( t == 5)
		do_pa(stack_b, stack_a);
	
}

void	sort(t_stack *stack_a, t_stack *stack_b)
{

	if (stack_a->size == 2)
	   	do_sa(stack_a);
	else if (stack_a->size == 3)
		ft_sort_three(stack_a);
	else if(stack_a->size <= 5)
		ft_sort_five(stack_a, stack_b);
	else if (stack_a->size <= 100)
		ft_sort_100(stack_a, stack_b);
	else
		ft_sort_500(stack_a, stack_b);
		

}
	
