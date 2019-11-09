# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaboukha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/24 16:18:28 by aaboukha          #+#    #+#              #
#    Updated: 2019/11/07 21:50:41 by aaboukha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
SRC			=	ft_strchr.c ft_strcmp.c ft_atoi.c ft_strdup.c ft_bzero.c ft_memccpy.c ft_strjoin.c ft_calloc.c ft_memchr.c ft_strlcat.c ft_isalnum.c ft_memcmp.c ft_strlcpy.c ft_isalpha.c ft_memcpy.c ft_strlen.c ft_isascii.c ft_memmove.c ft_strmapi.c ft_isdigit.c ft_memset.c ft_strncmp.c ft_isprint.c ft_putchar.c ft_strnstr.c ft_itoa.c ft_putchar_fd.c ft_strrchr.c ft_putendl_fd.c ft_strtrim.c ft_putnbr.c ft_substr.c ft_putnbr_fd.c ft_tolower.c ft_putstr.c ft_toupper.c ft_putstr_fd.c ft_split.c
SRC_BONUS	=	ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c
OBJ			=	$(SRC:.c=.o)
OBJ_BONUS	=	$(SRC_BONUS:.c=.o)
CFLAGS		=	-Wall -Werror -Wextra
HEADER		=	libft.h

all: $(NAME)

$(NAME):  $(OBJ) bonus
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

$(OBJ): $(SRC) $(HEADER)
	cc $(CFLAGS) -c $(SRC)

bonus: $(SRC_BONUS) $(HEADER)
	cc $(CFLAGS) -c $(SRC_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
