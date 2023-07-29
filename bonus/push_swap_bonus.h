/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:31:15 by htouil            #+#    #+#             */
/*   Updated: 2023/07/26 21:05:03 by htouil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "get_next_line/get_next_line.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_args
{
	char	**s_arr;
	int		*n_a;
	int		max_a;
	int		top_a;
	int		*n_b;
	int		max_b;
	int		top_b;
	int		tmp;
}		t_args;

// libft functions:
int		ft_atoi1(char *str);
long	ft_atoi2(char *str);
void	*ft_calloc(size_t count, size_t size);
int		ft_strchrc(char *s, int c);
char	*ft_strjoin(char *str1, char *str2);
char	**ft_split(char *s, char c);
void	free_it(char **str, int d);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2);

// push_swap functions:
void	arguments_validity(int ac, char **av, t_args *args);
void	split_n_join(int ac, char **av, char **long_str);
void	free_arr(char **str);
int		check_if_args_exist(int ac, char **av);
int		check_if_sorted(t_args *args);
int		check_if_isorted(t_args *args);
void	pop(t_args *args, char l);
void	push(t_args *args, char l);
void	swap_a(t_args *args);
void	swap_b(t_args *args);
void	swap_both(t_args *args);
void	push_a(t_args *args);
void	push_b(t_args *args);
void	rotate_a(t_args *args);
void	rotate_b(t_args *args);
void	rotate_both(t_args *args);
void	rev_rotate_a(t_args *args);
void	rev_rotate_b(t_args *args);
void	rev_rotate_both(t_args *args);
void	check_if_ok(t_args *args);

#endif
