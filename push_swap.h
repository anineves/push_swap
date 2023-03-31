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

/*Structures
*/
typedef struct s_stack
{
	int		size;
	int		blocks;
	int		*stack;
}	t_stack;

int	ft_verific(char **argv);
t_stack	*ft_createb(t_stack *stack_a);
t_stack	*ft_create(int capacity);
void	ft_init_stack(t_stack *stack, char **argv);
long int	ft_atol(const char *str);
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
int	ft_is_order(t_stack *stack);
void	ft_sort(t_stack *stack_a, t_stack *stack_b);
int	ft_get_position(t_stack *stack_a, int value);
void	ft_sort_three(t_stack *stack);
void 	ft_sort_five(t_stack *stack_a, t_stack *stack_b);
int	ft_find_smaller(t_stack *stack);
int	ft_find_higher(t_stack *stack);
int 	ft_mediana(t_stack *stack_a);
void 	ft_quicksort(int *copy, int size);
void	ft_sort_b(t_stack *stack_a, t_stack *stack_b, int i); 
void	ft_sort_20(t_stack *stack_a, t_stack *stack_b);
void 	ft_sort_100(t_stack *stack_a, t_stack *stack_b);
void	ft_sort_500(t_stack *stack_a, t_stack *stack_b);
#endif
