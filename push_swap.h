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
	int	*stack;
	int	size;
}                                       t_stack;


int	ft_fil( char *n);
int	ft_atol(const char *str);
static void	ft_swap(t_stack *stack);



#endif



