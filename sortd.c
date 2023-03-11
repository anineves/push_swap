#include "push_swap.h"

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

void 	ft_sort_100(t_stack *stack_a, t_stack *stack_b)
{
	int i;
	int j;
	int midle;
	int smaller;
	int higher;
	int moves;
	midle = stack_a->size / 2;
	moves = 0;
	
	while( stack_a->size > 0)
	{
	
		smaller = ft_find_smaller(stack_a);
		i = ft_get_position(stack_a, smaller);
		if(i <= midle)
		{
			while(i > 0)
			{
			  do_ra(stack_a);
			  moves++;
			  i--;
			}
		}else{
			while(i < stack_a->size)
			{
			  do_rra(stack_a);
			  moves++;
			  i++;
			}
		}
		do_pb(stack_a, stack_b);
		moves++;
	}
	while( stack_b->size > 0)
	{
		do_pa(stack_b, stack_a);
		moves++;
	}
	
	ft_printf("numero de moves %d \n ", moves);
}


