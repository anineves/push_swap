#include "push_swap.h"

int main (int argc, char **argv)
{
	int i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if(argc < 2)
	{
		ft_printf("erro");
		return(1);
	}	
	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	stack_a->stack = malloc((argc) * sizeof(int));
	stack_a->size = argc - 1;
	stack_b->size = 0;
	i = 1;
	while (i <= stack_a->size)
	{
		stack_a->stack[i] = ft_fill(argv[i]);
		i++;
	}
	stack_b->stack = malloc((argc) * sizeof(int));
	stack_b->size = 0;
	i = 1 ;
	while(i <= stack_a->size)
	{	
		ft_swap(stack_a);
		ft_printf("%i \n", stack_a->stack[i]);
		i++;
	}
	return (0);
}

