#include "push_swap.h"

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

int ft_mediana(t_stack *stack_a)
{
	int size;
	int mediana;
	
	size = stack_a->size;
	
	quicksort(stack_a->copy , stack_a->size-1);
	
	 if(size % 2)
	 {
	 	mediana= stack_a->copy[size/ 2];
	 }
	 else
	 {
	 	mediana = (stack_a->copy[size/ 2 - 1] + stack_a->copy[size / 2]) / 2;
	 }
	 return(mediana);
		
}

void ft_mediana_spliter(t_stack *stack_a, t_stack *stack_b)
{
	int i;
	//int cont;
	int mediana;
	//int midle;
	int size;
	
	mediana = 0;
	i =0;
	//midle =  stack_a->size / 2;
	size = stack_a->size;
	mediana = ft_mediana(stack_a);
	
	while(i <= size )
	{	
	  if(stack_a->stack[0] <= mediana )
	  {
		do_pb(stack_a, stack_b);
		if(stack_b->stack[0] >  stack_b->stack[stack_b->size-1])
			do_rb(stack_b);
		else if(stack_b->stack[0] >  stack_b->stack[1])
			do_sb(stack_b);
	  }
	  else
	  {
	  	do_ra(stack_a);
	  }
	i++;
	}

	
}

void 	ft_sort_100(t_stack *stack_a, t_stack *stack_b)
{

	int smaller;
	int higher;	
	int midle ;
	int pos;
	
	pos = 0;
	midle = 0;
	int j;
	j = 0;
	ft_mediana_spliter(stack_a, stack_b);
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
		j++;
	
	}
	while(j > 0)
	{
		do_pb(stack_a, stack_b);
		j--;
	}
	
	while(stack_a->size > 0)
	{
		midle =  stack_a->size / 2;
		smaller = ft_find_smaller(stack_a);
		pos = ft_get_position(stack_a, smaller);
	
		if(pos < midle)
		{
			while(pos > 0)
			{
				do_ra(stack_a);
				pos--;
			}
		}
		else
		{
			while(pos <= stack_a->size - 1)
			{
				do_rra(stack_a);
				pos++;
			}
		}
		do_pb(stack_a, stack_b);
	}
	while(stack_b->size > 0)
	{
		do_pa(stack_b, stack_a);

	}
}
