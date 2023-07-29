/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_acts.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:05:04 by htouil            #+#    #+#             */
/*   Updated: 2023/07/25 21:24:29 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_args *args)
{
	pop(args, 'b');
	push(args, 'a');
	write(1, "pa\n", 3);
}

void	push_b(t_args *args)
{
	pop(args, 'a');
	push(args, 'b');
	write(1, "pb\n", 3);
}
