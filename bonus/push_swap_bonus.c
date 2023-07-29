/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:31:12 by htouil            #+#    #+#             */
/*   Updated: 2023/07/27 17:03:15 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pop(t_args *args, char l)
{
	if (l == 'a')
	{
		if (args->top_a == -1)
		{
			write(2, "Error\nCannot pop element, stack a is empty!\n", 44);
			return ;
		}
		args->tmp = args->n_a[args->top_a];
		args->top_a--;
	}
	else if (l == 'b')
	{
		if (args->top_b == -1)
		{
			write(2, "Error\nCannot pop element, stack b is empty!\n", 44);
			return ;
		}
		args->tmp = args->n_b[args->top_b];
		args->top_b--;
	}
}

void	push(t_args *args, char l)
{
	if (l == 'a')
	{
		if (args->top_a == args->max_a - 1)
		{
			write(2, "Error\nCannot push element, stack a is full!\n", 44);
			return ;
		}
		args->top_a++;
		args->n_a[args->top_a] = args->tmp;
	}
	if (l == 'b')
	{
		if (args->top_b == args->max_b - 1)
		{
			write(2, "Error\nCannot push element, stack b is full!\n", 44);
			return ;
		}
		args->top_b++;
		args->n_b[args->top_b] = args->tmp;
	}
}

void	init_stack(t_args *args)
{
	int	i;

	args->top_b = -1;
	args->top_a = -1;
	args->n_a = malloc(args->max_a * sizeof(int));
	args->n_b = malloc(args->max_b * sizeof(int));
	i = args->max_a - 1;
	while (i >= 0)
	{
		args->top_a++;
		args->n_a[args->top_a] = ft_atoi1(args->s_arr[i]);
		i--;
	}
	free_arr(args->s_arr);
}

int	main(int ac, char **av)
{
	t_args	args;

	if (ac <= 0)
	{
		write(2, "Error\nToo few arguments inserted\n", 33);
		return (1);
	}
	arguments_validity(ac, av, &args);
	init_stack(&args);
	check_if_ok(&args);
	free(args.n_a);
	free(args.n_b);
	return (0);
}
