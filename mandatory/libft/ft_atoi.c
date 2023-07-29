/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:17 by htouil            #+#    #+#             */
/*   Updated: 2023/07/28 21:23:02 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	ft_atoi1(char *str)
{
	int	i;
	int	string;
	int	restr;

	i = 0;
	string = 1;
	restr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		string = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		restr *= 10;
		restr += str[i] - '0';
		i++;
	}
	return (restr * string);
}

long	ft_atoi2(char *str)
{
	int		i;
	int		string;
	long	restr;

	i = 0;
	string = 1;
	restr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		string = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		restr *= 10;
		restr += str[i] - '0';
		if ((string * restr) > INT_MAX || (string * restr) < INT_MIN)
		{
			write (2, "Error\nOne or more arguments are too big!\n", 41);
			exit(1);
		}
		i++;
	}
	return (restr * string);
}
