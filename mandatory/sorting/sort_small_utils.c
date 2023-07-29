/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:45 by htouil            #+#    #+#             */
/*   Updated: 2023/07/25 12:42:47 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_args *args)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	j = 0;
	max = args->n_b[j];
	args->dt.i_max = i;
	while (i < args->top_b)
	{
		if (args->n_b[j] < args->n_b[i + 1])
		{
			max = args->n_b[i + 1];
			j = i + 1;
			args->dt.i_max = i + 1;
		}
		i++;
	}
	return (max);
}

int	find_min(t_args *args)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	min = args->n_a[j];
	args->dt.i_min = i;
	while (i < args->top_a)
	{
		if (args->n_a[j] > args->n_a[i + 1])
		{
			min = args->n_a[i + 1];
			j = i + 1;
			args->dt.i_min = i + 1;
		}
		i++;
	}
	return (min);
}
