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
	//int higher;
	//int pos_higher;
	//int = 0;
	int midle = stack_a->size;

	do_pb(stack_a, stack_b);
	do_pb(stack_a, stack_b);
	
	if(ft_is_order(stack_b) == 1)
	   	do_sb(stack_b);
	ft_printf("valor a %d, valor b %d, /n", stack_a->stack[0], stack_b->stack[0]  );	
	while(midle > 5)
	{
	
		if(stack_a->stack[0] < stack_b->stack[0])
		{
			//ft_printf("laco \n");
			do_ra(stack_a);
			//ft_printf(" escrito ra \n");
			midle--;
			//ft_printf("midle %d \n", midle);
		}
		else
		{
			do_pb(stack_a, stack_b);
			midle--;
			
		}
	}
	if (stack_a->size <= 5)
    	{
    	    ft_sort_five(stack_a, stack_b);
    	}	
	
}
