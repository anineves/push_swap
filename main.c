#include "push_swap.h"

t_stack	*create(int capacity)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = capacity;
	stack->stack = malloc(capacity * sizeof(int));
	stack->copy = malloc(capacity * sizeof(int));
	return (stack);
}

t_stack	*createb(t_stack *stack_a)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->size = 0;
	stack->stack = ft_calloc(stack_a->size , sizeof(int));
	stack->copy = ft_calloc(stack_a->size , sizeof(int));
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
		i++;
		j--;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	if (argc < 2)
		exit(EXIT_FAILURE);
	if (!ft_verific(argv))
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	stack_a = create(argc - 1);
	stack_b = createb(stack_a);
	init_stack(stack_a, argv);
	int	i;
	i =0;
	while(i < stack_a->size)
	{
		ft_printf("%d \n", stack_a->stack[i]);
		i++;
	}
	sort(stack_a, stack_b);
	i=0;
	ft_printf("b \n");
	while(i < stack_b->size)
	{
	ft_printf("%d \n", stack_b->stack[i]);
	i++;
	}
	ft_printf("a \n");
	i=0;
	while(i < stack_a->size)
	{
	ft_printf("%d \n", stack_a->stack[i]);
	i++;
	}
	//sort(stack_a, stack_b);
	free(stack_a->stack);
	free(stack_a->copy);
	free(stack_a);
	free(stack_b->stack);
	free(stack_b->copy);
	free(stack_b);
	return (0);
}

