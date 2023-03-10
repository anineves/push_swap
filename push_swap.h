/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:07:27 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 15:02:44 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#include <limits.h>


/*Structures
*/
typedef struct s_stack
{
	int		size;
	int		*copy;
	int		*stack;
}	t_stack;

int	ft_verific(char **argv);
void	do_sa(t_stack *stack_a);
void	do_sb(t_stack *stack_b);
void	do_ss(t_stack *stack_a, t_stack *stack_b);
void	do_pa(t_stack *stack_b, t_stack *stack_a);
void	do_pb(t_stack *stack_a, t_stack *stack_b);
void	do_ra(t_stack *stack_a);
void	do_rb(t_stack *stack_b);
void	do_rr(t_stack *stack_a, t_stack *stack_b);
void	do_rra(t_stack *stack_a);
void	do_rrb(t_stack *stack_b);
void	do_rrr(t_stack *stack_a, t_stack *stack_b);
int	ft_handler_error(char *msg, t_stack *stack);
int	ft_is_order(t_stack *stack);
void 	sort(t_stack *stack_a, t_stack *stack_b);
void	ft_sort_three(t_stack *stack);
void 	ft_sort_five(t_stack *stack_a, t_stack *stack_b);
int	find_smaller(t_stack *stack);




#endif



