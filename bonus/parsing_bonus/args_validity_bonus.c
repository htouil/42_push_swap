/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_validity_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:30:57 by htouil            #+#    #+#             */
/*   Updated: 2023/07/27 17:15:28 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	check_if_int(t_args *args)
{
	int	i;
	int	j;

	i = 0;
	while (args->s_arr[i])
	{
		j = 0;
		if ((args->s_arr[i][j] == '-' && args->s_arr[i][j + 1] == '\0')
			|| (args->s_arr[i][j] == '+' && args->s_arr[i][j + 1] == '\0'))
			return (0);
		if (args->s_arr[i][j] == '-' || args->s_arr[i][j] == '+')
			j++;
		while (args->s_arr[i][j] != '\0')
		{
			if (args->s_arr[i][j] < '0' || args->s_arr[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_ifin_range(t_args *args)
{
	int		i;
	long	nb;

	args->max_a = 0;
	args->max_b = 0;
	i = 0;
	while (args->s_arr[i])
	{
		nb = ft_atoi2(args->s_arr[i]);
		if (nb < INT_MIN || nb > INT_MAX)
			return (0);
		i++;
		args->max_a++;
		args->max_b++;
	}
	return (1);
}

int	check_if_duplicates(t_args *args)
{
	int	i;
	int	j;

	i = 0;
	while (args->s_arr[i])
	{
		j = i + 1;
		while (args->s_arr[j])
		{
			if (ft_atoi1(args->s_arr[i]) == ft_atoi1(args->s_arr[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	display_errors(int ac, char **av, t_args *args)
{
	if (check_if_int(args) == 0 || check_if_args_exist(ac, av) == 0)
	{
		write(2, "Error\nOne or more arguments are not integers!\n", 45);
		free_arr(args->s_arr);
		exit(1);
	}
	if (check_ifin_range(args) == 0)
	{
		write(2, "Error\nOne or more arguments are not in integers range!\n", 55);
		free_arr(args->s_arr);
		exit(1);
	}
	if (check_if_duplicates(args) == 0)
	{
		write(2, "Error\nOne or more arguments are duplicated!\n", 44);
		free_arr(args->s_arr);
		exit(1);
	}
}

void	arguments_validity(int ac, char **av, t_args *args)
{
	char	*long_str;

	split_n_join(ac, av, &long_str);
	args->s_arr = ft_split(long_str, ' ');
	free(long_str);
	display_errors(ac, av, args);
}
