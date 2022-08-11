# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 11:42:31 by tboumadj          #+#    #+#              #
#    Updated: 2022/06/29 13:50:28 by tboumadj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a

SRCS 		= ft_atoi.c \
				addlink.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_free.c \
				ft_pourcentdi.c \
				ft_pourcentp.c \
				ft_pourcents.c \
				ft_pourcenttwice.c \
				ft_pourcentu.c \
				ft_pourcentx.c \
				ft_pourcentupperx.c \
				ft_printf.c \
				ft_putchar.c \
				ft_lstaddback.c \
				ft_lstprintlist.c

OBJS	= $(SRCS:%.c=%.o)

HEADER	= libft.h

FLAGS	= -Wall -Werror -Wextra

.SILENT : $(OBJS)

$(NAME):
		gcc $(FLAGS) -c $(SRCS) -I ./includes
		ar rc $(NAME) $(OBJS)
.SILENT : $(OBJS) $(NAME)
all: $(NAME)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all