#include "push_swap.h"

t_stack	*ft_create(int size)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->blocks = 0;
	stack->size = size;
	stack->stack = malloc(size * sizeof(int));	
	return (stack);
}

t_stack	*ft_createb(t_stack *stack_a)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->blocks = 0;
	stack->size = 0;
	stack->stack = ft_calloc(stack_a->size, sizeof(int));
	return (stack);
}

void	ft_init_stack(t_stack *stack, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = stack->size - 1;
	while (j >= 0)
	{	

		stack->stack[i] = ft_atoi(argv[i + 1]);
		i++;
		j--;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (!ft_verific(argv))
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	stack_a = ft_create(argc - 1);
	stack_b = ft_createb(stack_a);
	ft_init_stack(stack_a, argv);
	if (!ft_is_order(stack_a))
		ft_sort(stack_a, stack_b);
	free(stack_a->stack);
	free(stack_a);
	free(stack_b->stack);
	free(stack_b);
	return (0);
}
