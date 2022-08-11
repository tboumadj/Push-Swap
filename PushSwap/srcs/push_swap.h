/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:41:24 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/08 13:39:22 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PUSH_SWAP_H
# define    PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//-------------------MAIN----------------------//
int		*ft_checkarg(int val, char **str, int *tab, int c);	//
void	ft_checkalpha(const char *str);					//
int		checksize(char *str);							//#check all param 
int		checkdoublesize(int count, char **str);			//error & size before
void	checkdoublenb(int *tab, int size);				//stock
int		*all_check(int argc, char **argv, int *tab, int c);

int		*ft_checkandstock(const char *str, int *tab, int c);//#atoi & stock tab
t_list	*stock_a(int *tab, int c);						//  #stock chain list
														//		tab reverse

//----------------OPERATION-------------------//
t_list	*swap_a(t_list *list);
t_list	*swap_b(t_list *list);
t_list	*swap_neutre(t_list *list);
int		*swap_double(t_list **lista, t_list **listb);

t_list	*rotate_a(t_list *list);
t_list	*rotate_b(t_list *list);
int		*rotate_double(t_list **lista, t_list **listb);
t_list	*rotate(t_list *list);

t_list	*reverse(t_list *list);
t_list	*reverse_b(t_list *list);
t_list	*reverse_a(t_list *list);
int		*reverse_double(t_list **lista, t_list **listb);
t_list	*ft_cutlast(t_list **list, int c);
t_list	*ft_copy_lastlst(t_list *list);

t_list	*push_b(t_list **list_a, t_list *list_b);
t_list	*push_a(t_list **list_b, t_list *list_a);
t_list	*stocklst(t_list *list_b, t_list *nw);

//-------------------TRI----------------------//
int		*tri_poloski(t_list **lista, t_list **listb);
int		tri_mult(t_list **lista, int size);
int		find_big(t_list **lista);
int		find_min(t_list **lista);
int		find_tmp(t_list **lista, int nb, int min);
int		find_tronc(t_list **lista, int size);
int		find_midtronc(t_list **lista, int load);
int		ft_findmidalg(t_list **list, int nb);
int		ft_checkfindnb(t_list **list, int nb);
int		ft_findaction(t_list **list, int nb);
int		ft_findmidalgreverse(t_list **list, int nb);
int		find_nextmin(t_list **list, int nb);
int		ft_finddiv(t_list **list);

void	ft_doubletri(t_list **lista, t_list **listb);
void	tri_doubleb(t_list **list);
void	tri_three(t_list **list);
void	tri_five(t_list **lista, t_list **listb);
void	ft_rushbtest(t_list **lista, t_list **listb, int mid);

//-----------------ALGO---------------------------//
void	tri_newsort(t_list **lista, t_list **listb, int size);
int		ft_rushmidsize(t_list **lista, t_list **listb, int mid);
int		ft_returntob(t_list **lista, t_list **listb);
void	ft_rushmidflash(t_list **lista, t_list **listb);
int		ft_rushmidsizetest(t_list **lista, t_list **listb);
void	ft_tribafterpush(t_list **lista, t_list **listb, int mid);
void	tri_secondpart(t_list **lista, t_list **listb);

//--------------Check----------------------------//
int		*tri_check(t_list **lista, t_list **listb);
int		check_done(t_list *list);
int		check_failsize(t_list *list);
int		*tri_doublecheck(t_list **lista, t_list **listb);
int		check_doneb(t_list *list);

#endif
