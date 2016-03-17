# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frmarinh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 12:48:21 by frmarinh          #+#    #+#              #
#    Updated: 2016/03/17 13:57:47 by frmarinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS_PATH = ./srcs

FILE_EXTENSION = c

SRCS_FILE = $(SRCS_PATH)/ft_printf.c

ALL_O_FILE = $(notdir $(SRCS_FILE))

ALL_O_FILE_SUITE = $(ALL_O_FILE:.$(FILE_EXTENSION)=.o)

HEADER_PATH = ./includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS_FILE) $(FLAGS) -I $(HEADER_PATH)
	@ar rc $(NAME) $(ALL_O_FILE_SUITE)
	@ranlib $(NAME)

clean:
	@rm -rf $(ALL_O_FILE_SUITE)

fclean: clean
	@rm -rf $(NAME)

re:		fclean all
