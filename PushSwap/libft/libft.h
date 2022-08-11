/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:21:10 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 17:40:05 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     LIBFT_H
# define    LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	int				size;
	int				content;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;

//--------------LIBFT-------------------//
int			ft_atoi(const char *str);
void		check_atoi(long nb, int neg);
t_list		*ft_lstnew(long content);
t_list		*add_link(t_list *list, int tab);
void		ft_lstclear(t_list **lst, void (*del)(long));
void		ft_lstdelone(t_list *lst, void (*del)(long));
int			ft_lstsize(t_list *lst);
void		del(void *a);
t_list		*ft_lstadd_back(t_list *lst, t_list *new);
void		print_list(t_list *list);
void		ft_printlstsize(t_list *lst);
void		ft_free_all(int *tab);
void		ft_freeall_lst(t_list *list);
void		ft_printerror(void);

//---------------PRINTF-----------------//
int			ft_printf(const char *format, ...);
int			ft_pourcentdi(int nb);
int			ft_pourcentp(unsigned long long ptr);
int			ft_pourcents(char *s);
int			ft_pourcenttwice(void);
int			ft_pourcentu(unsigned int nb);
int			ft_pourcentx(unsigned int num);
int			ft_pourcentupperx(unsigned int num);
int			ft_putchar(int c);
int			ft_search_arg(va_list arg, const char format);
void		ft_putnbrx(unsigned int num);
int			ft_strintx(unsigned int nb);
int			ft_strintupperx(unsigned int nb);
void		ft_putnbrupperx(unsigned int num);
int			ft_strintu(unsigned int nb);
void		ft_putnbrp(unsigned long long num);
int			ft_strintp(unsigned long long nb);
int			ft_strint(int nb);

#endif
