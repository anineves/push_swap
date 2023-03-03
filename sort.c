#include "push_swap.h"

void sort(t_stack *stack_a)
{

	if (stack_a->size == 2)
	{
		if(ft_is_order(stack_a) == 0)
	   		do_sa(stack_a);
	}
	else if (stack_a->size == 3)
	{
		ft_sort_three()
	}
}
