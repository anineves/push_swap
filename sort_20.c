/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_19.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:46:13 by asousa-n          #+#    #+#             */
/*   Updated: 2023/03/30 14:46:13 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_extra(t_stack *stack_a)
{
	int	smaller;
	
	smaller = ft_find_smaller(stack_a);
	while (ft_get_position(stack_a, smaller) != 0)
	{
		if (ft_get_position(stack_a, smaller) < (stack_a->size / 2))
			do_ra(stack_a);
		else
			do_rra(stack_a);
	}
	
			
}

void	ft_sort_20(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (stack_a->size > 0)
	{
		ft_extra(stack_a);
		do_pb(stack_a, stack_b);
		i++;
	}
	while (i > 0)
	{
		do_pa(stack_b, stack_a);
		i--;
	}
}
