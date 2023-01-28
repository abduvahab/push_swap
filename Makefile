# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areheman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 10:28:21 by areheman          #+#    #+#              #
#    Updated: 2022/05/16 16:19:48 by areheman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
GCC = gcc
CFLAGS = -Wall -Wextra -Werror


SRC = push_swap.c ft_check_error.c ft_push_utils.c push_struct.c ft_read_tab.c \
	  push_operations1.c push_operations2.c ft_sort_list.c ft_sort_3.c \
	  ft_sort_4.c ft_sort_5.c push_element_ab.c ft_sort_10.c ft_sort_100.c \
	  push_division.c ft_sort_big.c

OBJS = $(SRC:.c=.o)

.c.o : 
		@$(GCC) $(CFLAGS) -c $< -o ${<:.c=.o}

all : $(NAME) 
	
$(NAME) : $(OBJS)
		@make all -C printf
#		@cp printf/libftprintf.a $@ #
		@$(GCC) $(CFLAGS) $(OBJS) printf/libftprintf.a -o $(NAME)

clean :
		@make clean -C ./printf
		@rm -rf $(OBJS)

fclean : clean
		@make fclean -C ./printf
		@rm -rf $(NAME)

re : clean fclean all 

.PHONY : all clean fclean re 
