/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_acts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:11 by htouil            #+#    #+#             */
/*   Updated: 2023/07/25 21:27:01 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_args *args)
{
	int	i;
	int	binma;

	if (args->top_a < 1)
		return ;
	binma = args->n_a[args->top_a];
	i = args->top_a;
	while (i >= 0)
	{
		args->n_a[i] = args->n_a[i - 1];
		i--;
	}
	args->n_a[0] = binma;
	write(1, "ra\n", 3);
}

void	rotate_b(t_args *args)
{
	int	i;
	int	binma;

	if (args->top_b < 1)
		return ;
	binma = args->n_b[args->top_b];
	i = args->top_b;
	while (i >= 0)
	{
		args->n_b[i] = args->n_b[i - 1];
		i--;
	}
	args->n_b[0] = binma;
	write(1, "rb\n", 3);
}

void	rotate_both(t_args *args)
{
	rotate_a(args);
	rotate_b(args);
	write(1, "rr\n", 3);
}
