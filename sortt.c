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
	//int i;
	int midle = stack_a->size;
	do_pb(stack_a, stack_b);
	do_pb(stack_a, stack_b);
	
	if(ft_is_order(stack_b) == 1)
	   	do_sb(stack_b);
	ft_printf("valor a %d, valor b %d, \n", stack_a->stack[0], stack_b->stack[0]  );	
	while(midle > 0)
	{
		if(stack_a->stack[0] > stack_b->stack[0]  &&  stack_a->stack[stack_a->size - 1] > stack_b->stack[0])
		{
			if(stack_a->stack[0] > stack_a->stack[stack_a->size - 1])
				do_rra(stack_a);
			do_pb(stack_a, stack_b);
	
		}
		if(stack_a->stack[0] > stack_b->stack[0]  &&  stack_a->stack[1] > stack_b->stack[0])
		{
			if(stack_a->stack[0] > stack_a->stack[1])
				do_sa(stack_a);
			do_pb(stack_a, stack_b);
	
		}
		
		if(stack_a->stack[stack_a->size - 1 ] > stack_a->stack[0])
		{
			do_rra(stack_a);
		}
			
		if(stack_a->stack[0] < stack_a->stack[1])
		{
			do_sa(stack_a);
		}
		
		if(stack_a->stack[0] > stack_b->stack[0])
		{
			do_pb(stack_a, stack_b);
			
		}
		else if(stack_a->stack[0] < stack_b->stack[stack_b->size - 1])
		{
			do_pb(stack_a, stack_b);
			do_rb(stack_b);
		}
		else if ( stack_a->stack[stack_a->size -1] < stack_b->stack[stack_b->size - 1])
		{
			do_rra(stack_a);
			do_pb(stack_a, stack_b);
			do_rb(stack_b);
			
		}
		ft_printf("valor a %d, valor b %d, valor afim %d, valor bfim %d, \n", stack_a->stack[0], stack_b->stack[0],  stack_a->stack[stack_a->size -1], stack_b->stack[stack_b->size - 1]);
		ft_printf(" valor midle %d \n", midle);
		midle--;
	}
	
	
	
}




		//size = stack_a->size;
		while(i <= stack_a->size - 1)
		{
			media = ft_media(stack_a);
			if(stack_a->stack[0] <= media )
			{
				do_pb(stack_a, stack_b);
				cont++;
			}
			else
			{
				if(stack_a->stack[0] == higher)
				{
					
					if( (stack_a->stack[1] == smaller))
					{
						do_sa(stack_a);
						do_pb(stack_a, stack_b);
						do_rr(stack_a, stack_b);
					}else{
						do_sa(stack_a);
					}
				} 
				else
				{			
					do_ra(stack_a);
				}
				
			}
			i++;
		}
		i = 0;
	}*/
