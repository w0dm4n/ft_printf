# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jguyet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 12:22:35 by jguyet            #+#    #+#              #
#    Updated: 2016/03/17 15:00:06 by jguyet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ_DIR = ./.obj/

LIBFT_PATH = ./libft/

PRINTF_PATH = ./srcs/

SRC_PRINTF = \
		ft_printf.c\
		handler.c
		
SRC_LFT = \
		ft_strlen.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_strdup.c\
		ft_strcmp.c\
		ft_atoi.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_itoa.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_strnchr.c\
		ft_strndup.c\
		ft_lstsplit.c\
		ft_itoabase.c\
		ft_putnbr_back.c\
		ft_putlst.c\
		ft_lenbychar.c\
		ft_lstaddend.c\
		ft_add_end_int.c\
		ft_count_char.c\
		ft_strtrim_n.c

SRC_PRINTFO = $(SRC_PRINTF:.c=.o)

SRC_LFTO = $(SRC_LFT:.c=.o)

SRC_LFT_F = $(addprefix $(LIBFT_PATH),$(SRC_LFT))

SRC_PRINTF_F = $(addprefix $(PRINTF_PATH),$(SRC_PRINTF))

SRC_ALL = $(SRC_LFT_F) $(SRC_PRINTF_F)

OALL = $(SRC_LFTO) $(SRC_PRINTFO)

# COLORS
C_NO	=		"\033[00m"
C_OK	=		"\033[35m"
C_GOOD	=		"\033[32m"
C_ERROR	=		"\033[31m"
C_WARN	=		"\033[33m"

SUCCESS	=		$(C_GOOD)SUCCESS$(C_NO)
OK		=		$(C_OK)OK$(C_NO)

NAME = libftprintf.a

FLAG = -Werror -Wextra -Wall

$(NAME): all

all:
	@gcc -I includes -c  $(SRC_ALL) $(FLAG)
	@ar rc $(NAME) $(SRC_LFTO) $(SRC_PRINTFO)
	@ranlib $(NAME)
	@gcc test_printf.c -L . -lftprintf -I includes/ -o test_printf

clean:
	@rm -rf $(OALL)

fclean:		clean
	@rm -rf $(NAME)

re:		fclean all

.PHONY: all fclean clean re
