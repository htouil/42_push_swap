/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:26:31 by htouil            #+#    #+#             */
/*   Updated: 2023/07/25 12:33:13 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_arr(int *arr, t_args *args)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < args->top_a)
	{
		if (arr[i] > arr[i + 1])
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

int	*get_sorted_cpy(t_args *args)
{
	int	*cpy;
	int	i;

	cpy = malloc((args->max_a) * sizeof(int));
	if (!cpy)
		return (NULL);
	i = 0;
	while (i <= args->top_a)
	{
		cpy[i] = args->n_a[i];
		i++;
	}
	sort_arr(cpy, args);
	return (cpy);
}

int	get_index(int *arr, int value)
{
	int	i;

	i = 0;
	while (i <= 999)
	{
		if (arr[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	move_to_b(int start, int end, int *cpy, t_args *args)
{
	int	i;

	while (args->top_a >= 0)
	{
		i = get_index(cpy, args->n_a[args->top_a]);
		if (i <= (end + start) && i >= start)
		{
			push_b(args);
			start++;
		}
		else if (i < start)
		{
			push_b(args);
			rotate_b(args);
			start++;
		}
		else if (i > (end + start))
			rotate_a(args);
	}
}

void	move_to_a(t_args *args)
{
	int	i;

	while (args->top_b >= 0)
	{
		i = get_index(args->n_b, find_max(args));
		while (i != args->top_b)
		{
			if ((i + 1) >= (args->top_b - i))
			{
				rotate_b(args);
				i++;
			}
			else if ((i + 1) <= (args->top_b - i))
			{
				rev_rotate_b(args);
				i--;
				if (i == -1)
					i = args->top_b;
			}
		}
		push_a(args);
	}
}
