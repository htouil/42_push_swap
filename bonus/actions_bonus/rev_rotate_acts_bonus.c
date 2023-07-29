/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_acts_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:14:15 by htouil            #+#    #+#             */
/*   Updated: 2023/07/26 16:14:16 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
}

void	rev_rotate_both(t_args *args)
{
	rev_rotate_a(args);
	rev_rotate_b(args);
}
