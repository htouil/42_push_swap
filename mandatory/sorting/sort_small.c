/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:41 by htouil            #+#    #+#             */
/*   Updated: 2023/07/28 20:45:02 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_args *args)
{
	if (args->top_a == 1 && (args->n_a[1] > args->n_a[0]))
	{
		swap_a(args);
		return ;
	}
	if ((args->n_a[0] < args->n_a[1]) && (args->n_a[0] > args->n_a[2]))
	{
		rev_rotate_a(args);
		swap_a(args);
	}
	else if ((args->n_a[0] > args->n_a[1]) && (args->n_a[0] < args->n_a[2]))
		rotate_a(args);
	else if ((args->n_a[2] > args->n_a[1]) && (args->n_a[2] < args->n_a[0]))
		swap_a(args);
	else if ((args->n_a[2] < args->n_a[1]) && (args->n_a[2] > args->n_a[0]))
		rev_rotate_a(args);
	else if ((args->n_a[11] > args->n_a[0]) && (args->n_a[1] < args->n_a[2]))
	{
		rotate_a(args);
		swap_a(args);
	}
}

void	sort_5(t_args *args)
{
	int	min;

	while (args->top_a != 2)
	{
		min = find_min(args);
		if (args->n_a[args->top_a] == min)
			push_b(args);
		else
		{
			if ((args->top_a - args->dt.i_min) <= (args->dt.i_min + 1))
				rotate_a(args);
			else if ((args->top_a - args->dt.i_min) >= (args->dt.i_min + 1))
				rev_rotate_a(args);
		}
	}
	sort_3(args);
	while (args->top_b >= 0)
		push_a(args);
}
