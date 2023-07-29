# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htouil <htouil@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 16:39:22 by htouil            #+#    #+#              #
#    Updated: 2023/07/27 16:39:23 by htouil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

BONUS	= checker

SRCS	= mandatory/push_swap.c mandatory/libft/ft_atoi.c mandatory/libft/ft_calloc.c mandatory/libft/ft_strchrc.c \
				mandatory/libft/ft_strjoin.c mandatory/libft/ft_split.c \
				mandatory/parsing/args_validity.c mandatory/parsing/reformulate_args.c \
				mandatory/actions/swap_acts.c mandatory/actions/push_acts.c mandatory/actions/rotate_acts.c mandatory/actions/rev_rotate_acts.c \
				mandatory/sorting/sort_small.c mandatory/sorting/sort_small_utils.c mandatory/sorting/sort_big.c mandatory/sorting/sort_big_utils.c

BONUS_SRCS	= bonus/push_swap_bonus.c bonus/checker_bonus.c bonus/libft_bonus/ft_atoi_bonus.c bonus/libft_bonus/ft_calloc_bonus.c \
				bonus/libft_bonus/ft_strncmp_bonus.c bonus/libft_bonus/ft_strchrc_bonus.c bonus/libft_bonus/ft_split_bonus.c \
				bonus/parsing_bonus/args_validity_bonus.c bonus/parsing_bonus/reformulate_args_bonus.c \
				bonus/actions_bonus/swap_acts_bonus.c bonus/actions_bonus/push_acts_bonus.c \
				bonus/actions_bonus/rotate_acts_bonus.c bonus/actions_bonus/rev_rotate_acts_bonus.c \
				bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c

OBJS	= $(SRCS:.c=.o)

BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

CC		= cc

FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

bonus: $(BONUS)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

$(BONUS): $(BONUS_OBJS)
		$(CC) $(BONUS_OBJS) -o $(BONUS)

clean:
		rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
		rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY	= all clean fclean re
