/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_acts.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:08 by htouil            #+#    #+#             */
/*   Updated: 2023/07/25 21:25:57 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_a(t_args *args)
{
	int	i;
	int	binma;

	if (args->top_a < 1)
		return ;
	binma = args->n_a[0];
	i = 0;
	while (i < args->top_a)
	{
		args->n_a[i] = args->n_a[i + 1];
		i++;
	}
	args->n_a[args->top_a] = binma;
	write(1, "rra\n", 4);
}

void	rev_rotate_b(t_args *args)
{
	int	i;
	int	binma;

	if (args->top_b < 1)
		return ;
	binma = args->n_b[0];
	i = 0;
	while (i < args->top_b)
	{
		args->n_b[i] = args->n_b[i + 1];
		i++;
	}
	args->n_b[args->top_b] = binma;
	write(1, "rrb\n", 4);
}

void	rev_rotate_both(t_args *args)
{
	rev_rotate_a(args);
	rev_rotate_b(args);
	write(1, "rrr\n", 4);
}
