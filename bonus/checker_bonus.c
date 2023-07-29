/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 23:06:05 by htouil            #+#    #+#             */
/*   Updated: 2023/07/29 16:21:58 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error_display_nexit(char *action, t_args *args)
{
	write (2, "Error\nOne or more actions are invalid!\n", 39);
	free(action);
	free(args->n_a);
	free(args->n_b);
	exit (1);
}

void	execute_action(char *action, t_args *args)
{
	if (ft_strncmp(action, "sa\n") == 0)
		swap_a(args);
	else if (ft_strncmp(action, "sb\n") == 0)
		swap_b(args);
	else if (ft_strncmp(action, "ss\n") == 0)
		swap_both(args);
	else if (ft_strncmp(action, "pa\n") == 0)
		push_a(args);
	else if (ft_strncmp(action, "pb\n") == 0)
		push_b(args);
	else if (ft_strncmp(action, "ra\n") == 0)
		rotate_a(args);
	else if (ft_strncmp(action, "rb\n") == 0)
		rotate_b(args);
	else if (ft_strncmp(action, "rr\n") == 0)
		rotate_both(args);
	else if (ft_strncmp(action, "rra\n") == 0)
		rev_rotate_a(args);
	else if (ft_strncmp(action, "rrb\n") == 0)
		rev_rotate_b(args);
	else if (ft_strncmp(action, "rrr\n") == 0)
		rev_rotate_both(args);
	else
		error_display_nexit(action, args);
}

void	check_if_ok(t_args *args)
{
	char	*action;

	while (1)
	{
		action = get_next_line(0);
		if (action)
		{
			execute_action(action, args);
			free(action);
		}
		else
			break ;
	}
	if (args->top_a == (args->max_a - 1) && args->top_b == -1
		&& check_if_isorted(args) == 1)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}
