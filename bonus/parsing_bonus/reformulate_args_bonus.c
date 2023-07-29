/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reformulate_args_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:31:00 by htouil            #+#    #+#             */
/*   Updated: 2023/07/29 16:36:27 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	split_n_join(int ac, char **av, char **long_str)
{
	int		i;
	int		j;
	char	**tmp;

	*long_str = ft_calloc(1, 1);
	i = 0;
	while (++i < ac)
	{
		if (ft_strchrc(av[i], ' ') == 0)
		{
			*long_str = ft_strjoin(*long_str, av[i]);
			*long_str = ft_strjoin(*long_str, " ");
		}
		else if (ft_strchrc(av[i], ' ') == 1)
		{
			tmp = ft_split(av[i], ' ');
			j = -1;
			while (tmp[++j])
			{
				*long_str = ft_strjoin(*long_str, tmp[j]);
				*long_str = ft_strjoin(*long_str, " ");
			}
			free_arr(tmp);
		}
	}
}

void	free_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != NULL)
			free(str[i]);
		i++;
	}
	free(str);
}

int	check_if_args_exist(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] && av[i][j] == ' ')
			j++;
		if (av[i][j] == '\0')
			return (0);
		i++;
	}
	return (1);
}

int	check_if_sorted(t_args *args)
{
	int	i;

	i = 0;
	while (args->s_arr[i] && args->s_arr[i + 1])
	{
		if (ft_atoi1(args->s_arr[i]) > ft_atoi1(args->s_arr[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	check_if_isorted(t_args *args)
{
	int	i;

	i = 0;
	while (i < args->top_a)
	{
		if (args->n_a[i] < args->n_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
