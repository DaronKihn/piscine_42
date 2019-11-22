#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbessa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 16:53:22 by sbessa            #+#    #+#              #
#    Updated: 2018/10/09 18:34:03 by dkihn            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq

SRC = main.c read_std_map.c read_map.c print_map.c find_map.c errors.c

CHEADER = ft.h

CFLAGS = -Wall -Wextra -Werror

all:
	gcc $(CFLAGS) -I $(CHEADER) $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all