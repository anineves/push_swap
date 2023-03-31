/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:06:07 by asousa-n          #+#    #+#             */
/*   Updated: 2023/03/30 15:06:09 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_b(t_stack *stack_a, t_stack *stack_b, int i)
{
	int	higher;

	higher = 0;
	while (i > 0)
	{
		higher = ft_find_higher(stack_b);
		while (ft_get_position(stack_b, higher) != 0)
		{
			if (ft_get_position(stack_b, higher) < (stack_b->size / 2))
				do_rb(stack_b);
			else
				do_rrb(stack_b);
		}
		do_pa(stack_b, stack_a);
		i--;
	}
}

void	ft_quicksort(int *copy, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size -1)
	{
		if (copy[i] > copy[i + 1])
		{
			tmp = copy[i];
			copy[i] = copy[i + 1];
			copy[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

int	ft_mediana(t_stack *stack_a)
{
	int	mediana;
	int	*tab;
	int	i;

	i = 0;
	mediana = 0;
	tab = malloc(sizeof(int) * stack_a->size);
	while (i < stack_a->size)
	{
		tab[i] = stack_a->stack[i];
		i++;
	}
	ft_quicksort(tab, stack_a->size);
	mediana = tab[stack_a->blocks];
	free(tab);
	return (mediana);
}

void	ft_sort_100(t_stack *stack_a, t_stack *stack_b)
{
	int	med;
	int	i;

	stack_a->blocks = 20;
	i = 0;
	while (stack_a->size > 20)
	{
		med = ft_mediana(stack_a);
		while (ft_find_smaller(stack_a) < med)
		{
			if (stack_a->stack[0] < med)
			{
				do_pb(stack_a, stack_b);
				i++;
			}
			else
				do_ra(stack_a);
		}
	}
	ft_sort_20(stack_a, stack_b);
	ft_sort_b(stack_a, stack_b, i);
}

void	ft_sort_500(t_stack *stack_a, t_stack *stack_b)
{
	int	med;
	int	 i;

	i = 0;
	stack_a->blocks = 45;
	while (stack_a->size > 100)
	{
		med = ft_mediana(stack_a);
		while (ft_find_smaller(stack_a) < med)
		{
			if (stack_a->stack[0] < med)
			{
				do_pb(stack_a, stack_b);
				i++;
			}
			else
				do_ra(stack_a);
		}
	}
	ft_sort_100(stack_a, stack_b);
	ft_sort_b(stack_a, stack_b, i);
}
