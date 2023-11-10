# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erpiana <erpiana@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 21:28:19 by erpiana           #+#    #+#              #
#    Updated: 2023/11/04 21:37:05 by erpiana          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./ft_printf.c ./libft/ft_strchr.c ./srcs/ft_print_format.c ./srcs/ft_put_un_nbr.c \
	./srcs/ft_putchar.c ./srcs/ft_puthexa.c ./srcs/ft_putnumber.c ./srcs/ft_putstr.c \
	./libft/ft_strlen.c

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
