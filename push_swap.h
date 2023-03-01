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
	int		top;
	int		*stack;
	char	c;
}	t_stack;

void	swap(t_stack *stack);
void	do_sa(t_stack *stack_a);
void	do_sb(t_stack *stack_b);
void	do_ss(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *stack_src, t_stack *stack_dst);
void	do_pa(t_stack *stack_b, t_stack *stack_a);
void	do_pb(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack);
void	do_ra(t_stack *stack_a);
void	do_rb(t_stack *stack_b);
void	do_rr(t_stack *stack_a, t_stack *stack_b);
void	rev_rotate(t_stack *stack);
void	do_rra(t_stack *stack_a);
void	do_rrb(t_stack *stack_b);
void	do_rrr(t_stack *stack_a, t_stack *stack_b);
int	ft_fill( char *n);
long	ft_atol(const char *str);
void	ft_swap(t_stack *stack);

//void ft_init(t_stack *stack_a, t_stack *stack_b, int argc , char **argv);



#endif



