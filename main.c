#include "push_swap.h"

t_stack	*create(int size)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = size;
	stack->top = - 1;
	stack->stack = malloc(size * sizeof(int));
	return (stack);
}

void	init_stack(t_stack *stack, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = stack->size - 1;
	while (j >= 0)
	{
		stack->stack[i] = ft_atoi(argv[i+1]);
		stack->top++;
		i++;
		j--;
	}
}

int main (int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int	i;
	
	i= 0;
	(void)stack_b;
	if (argc < 2)
		return (0);
	stack_a = create(argc - 1);
	stack_b = create(argc - 1);
	init_stack(stack_a, argv);
	do_pb(stack_a, stack_b);
	while(i < stack_a->size)
	{	
		ft_printf("%d \n", stack_a->stack[i]);
		i++;
	}
	ft_printf("stack b \n");
	i=0;
	while(i < stack_b->size)
	{	
		ft_printf("%d \n", stack_b->stack[i]);
		i++;
	}
}

