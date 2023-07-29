/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:49 by htouil            #+#    #+#             */
/*   Updated: 2023/07/26 19:31:59 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_100(t_args *args)
{
	int	*cpy;
	int	start;
	int	end;

	cpy = get_sorted_cpy(args);
	start = 0;
	end = 15;
	move_to_b(start, end, cpy, args);
	free(cpy);
	move_to_a(args);
}

void	sort_500(t_args *args)
{
	int	*cpy;
	int	start;
	int	end;

	cpy = get_sorted_cpy(args);
	start = 0;
	end = 30;
	move_to_b(start, end, cpy, args);
	free(cpy);
	move_to_a(args);
}
