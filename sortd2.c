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

void 	ft_sort_100(t_stack *stack_a, t_stack *stack_b)
{
	int i;
	int midle;
	int smaller;	
	int midle2 = stack_a->size / 2;
	while( midle2 >=0)
	{
		midle = stack_a->size / 2;
		smaller = ft_find_smaller(stack_a);
		i = ft_get_position(stack_a, smaller);
		if(i <= midle)
		{
		  	while(i > 0)
			{
			  do_ra(stack_a);
			  i--;
			}
		}
		else
		{
			while(i < stack_a->size)
			{
			  do_rra(stack_a);
			  i++;
			}
		}
		do_pb(stack_a, stack_b);
		midle2--;
	}
	quicksort(stack_a->stack, 0, stack_a->size - 1);
	while(stack_b->size > 0)
		do_pa(stack_b, stack_a);
}
