#include "push_swap.h"

void	ft_sort_b(t_stack *stack_a, t_stack *stack_b)
{
	int	higher;
	int	midle;
	int 	pos;
	
	pos = 0;
	while(stack_b->size > 0)
	{
		midle =  stack_b->size / 2;
		higher = ft_find_higher(stack_b);
		pos = ft_get_position(stack_b, higher);
	
		if(pos < midle)
		{
			while(pos > 0)
			{
				
				do_rb(stack_b);
				pos--;
			}
		}
		else
		{
			while(pos <= stack_b->size - 1)
			{
				do_rrb(stack_b);
				pos++;
			}
		}
		do_pa(stack_b, stack_a);
	}
}

void quicksort(int stack[], int tam) 
{  
    	int	i;
	int	tmp;

	i = 0;
	while (i < tam)
	{
		if (stack[i] > stack[i + 1])
		{
			tmp = stack[i];
			stack[i] = stack[i + 1];
			stack[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

int ft_mediana(t_stack *stack_a, int size)
{
	int mediana;
	
	mediana = 0;
	
	quicksort(stack_a->copy , stack_a->size-1);
	stack_a->blocks = stack_a->blocks +(size / 20);
	mediana = stack_a->copy[stack_a->blocks];
	 
	 return(mediana);
		
}
void	ft_sort_100(t_stack *stack_a, t_stack *stack_b)
{
	int	med;
	int size;
	
	size = stack_a->size;
	stack_a->blocks = 0;
	while (stack_a->size > 5)
	{
		med = ft_mediana(stack_a, size);	
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
