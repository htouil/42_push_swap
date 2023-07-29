/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_acts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:14 by htouil            #+#    #+#             */
/*   Updated: 2023/07/25 21:30:44 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_args *args)
{
	int	binma;

	if (args->top_a < 1)
		return ;
	binma = args->n_a[args->top_a];
	args->n_a[args->top_a] = args->n_a[args->top_a - 1];
	args->n_a[args->top_a - 1] = binma;
	write(1, "sa\n", 3);
}

void	swap_b(t_args *args)
{
	int	binma;

	if (args->top_b < 1)
		return ;
	binma = args->n_b[args->top_b];
	args->n_b[args->top_b] = args->n_b[args->top_b - 1];
	args->n_b[args->top_b - 1] = binma;
	write(1, "sb\n", 3);
}

void	swap_both(t_args *args)
{
	swap_a(args);
	swap_b(args);
	write (1, "ss\n", 3);
}
