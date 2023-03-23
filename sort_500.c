#include "push_swap.h"

int ft_mediana500(t_stack *stack_a, int size)
{
	int mediana;
	
	mediana = 0;
	
	quicksort(stack_a->copy , stack_a->size-1);
	stack_a->blocks = stack_a->blocks +(size / 11);
	mediana = stack_a->copy[stack_a->blocks];
	 
	 return(mediana);
		
}
void	ft_sort_500(t_stack *stack_a, t_stack *stack_b)
{
	int	med;
	int size;
	
	size = stack_a->size;
	stack_a->blocks = 0;
	while (stack_a->size > 5)
	{
		med = ft_mediana500(stack_a, size);	
		while (ft_find_smaller(stack_a) < med)
		{
			if (stack_a->stack[0] < med)
				do_pb(stack_a, stack_b);
			else
				do_ra(stack_a);
		}

	}
	ft_sort_five(stack_a, stack_b);
	ft_sort_b(stack_a, stack_b);
}
