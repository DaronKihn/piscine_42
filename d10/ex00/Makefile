# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 15:42:57 by dkihn             #+#    #+#              #
#    Updated: 2018/10/02 16:24:30 by dkihn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

INCLUDES = includes/
O_FT = ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o
ALL: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(O_FT)
	ranlib $(NAME)
clean:
	/bin/rm -f $(O_FT)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean ALL
