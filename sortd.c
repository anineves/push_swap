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
void quicksort(int stack[], int inicio, int fim) 
{  
    int pos_i;
    int pos_f;
    int temp;
    int pivot ;
    
    pivot = stack[(inicio + fim) / 2];
    pos_i = inicio;
    pos_f = fim;  
    while (pos_i <= pos_f) {
        while (stack[pos_i] < pivot)
            pos_i++;
        while (stack[pos_f] > pivot)
            pos_f--;
        if (pos_i <= pos_f) {
            temp = stack[pos_i];
            stack[pos_i] = stack[pos_f];
            stack[pos_f] = temp;
            pos_i++;
            pos_f--;
        }
    }
    if (inicio < pos_f)
        quicksort(stack, inicio, pos_f);
    if (pos_i < fim)
        quicksort(stack, pos_i, fim);
}

int ft_mediana(t_stack *stack_a)
{
	int stack_c[stack_a->size];
	int i;
	int mediana;
	
	
	
	while (i < stack_a->size)
        	{
                		stack_c[i] = stack_a->stack[i];
                		i++;
        	}

	quicksort(stack_c , 0 , i);
	
	 if(i % 2)
	 {
	 	mediana= stack_c[i / 2];
	 }
	 else
	 {
	 	mediana = (stack_c[i/ 2 - 1] + stack_c[i / 2]) / 2;
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
	ft_printf("valor mediana %d, valor stack_a->stack[0] %d \n", mediana , stack_a->stack[0]);	
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
