/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_acts_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:14:11 by htouil            #+#    #+#             */
/*   Updated: 2023/07/26 16:14:12 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push_a(t_args *args)
{
	pop(args, 'b');
	push(args, 'a');
}

void	push_b(t_args *args)
{
	pop(args, 'a');
	push(args, 'b');
}
