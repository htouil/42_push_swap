/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_acts_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:14:21 by htouil            #+#    #+#             */
/*   Updated: 2023/07/26 16:14:22 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	swap_a(t_args *args)
{
	int	binma;

	if (args->top_a < 1)
		return ;
	binma = args->n_a[args->top_a];
	args->n_a[args->top_a] = args->n_a[args->top_a - 1];
	args->n_a[args->top_a - 1] = binma;
}

void	swap_b(t_args *args)
{
	int	binma;

	if (args->top_b < 1)
		return ;
	binma = args->n_b[args->top_b];
	args->n_b[args->top_b] = args->n_b[args->top_b - 1];
	args->n_b[args->top_b - 1] = binma;
}

void	swap_both(t_args *args)
{
	swap_a(args);
	swap_b(args);
}
