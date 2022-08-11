# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 11:41:12 by tboumadj          #+#    #+#              #
#    Updated: 2022/08/05 20:55:42 by tboumadj@student ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   push_swap
LIBFT =  libft/libft.a
SRCS =   srcs/push_swap.c \
			srcs/check_param.c \
			srcs/check_stock.c \
			srcs/rotate.c \
			srcs/swap.c \
			srcs/reverse.c \
			srcs/push.c \
			srcs/tri_poloski.c \
			srcs/tri_klasovski.c \
			srcs/tri_check.c \
			srcs/tri_newsort.c \
			srcs/tri_find.c \
			srcs/tri_foncsort.c
CC =   gcc
FLAGS =   -Wall -Wextra -Werror
RM =   rm -f
HEADER =   srcs/push_swap.h
OBJS = $(SRCS:.c=.o)
# Couleurs
_RED    =   $'\x1b[31m
_GREEN  =   $'\x1b[32m

.c.o:
	$(CC) $(FLAGS) -I$(HEADER) -c $< -o $(<:c=o)
	
$(NAME): $(OBJS)
		@echo "$(_RED)Compilation libft.a en cours...$(_END)"
		$(MAKE) -C libft/
	 	$(CC) $(FLAGS) $(OBJS) libft/libft.a -o $(NAME)
		@echo "$(_RED)Compilation push_swap en cours...$(_END)"
		@echo "$(_GREEN)$(_BOLD)Fin de la compilation!$(_END)"

.SILENT : $(OBJS) $(NAME)

all     :   $(NAME)

clean   :
			$(MAKE) clean -C libft/
			$(RM) $(OBJS)
fclean  :	clean
			$(MAKE) fclean -C libft/
			$(RM) $(NAME)
re      :   fclean all
.PHONY  :   all clean fclean re