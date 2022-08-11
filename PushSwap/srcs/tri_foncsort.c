/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_foncsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:55:12 by tboumadj@student  #+#    #+#             */
/*   Updated: 2022/08/11 14:42:23 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_finddiv(t_list **list)
{
	int	div;
	int	size;

	size = ft_lstsize(*list);
	size = size - 1;
	div = 0;
	if (size <= 8)
		div = 2;
	else if (size <= 15)
		div = 3;
	else if (size <= 100)
		div = 5;
	else if (size <= 249)
		div = 10;
	else if (size > 249)
		div = 14;
	return (div);
}

void	ft_tribafterpush(t_list **lista, t_list **listb, int mid)
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		bigb;

	tmp1 = *lista;
	tmp2 = *listb;
	bigb = find_big(listb);
	if ((tmp1->content > mid) && (tmp2->content != bigb))
		rotate_double(lista, listb);
	return ;
}

t_list	*ft_copy_lastlst(t_list *list)
{
	t_list	*tmp;
	t_list	*size;
	int		c;

	c = ft_lstsize(list);
	size = list;
	while (c > 1)
	{
		size = size->next;
		c--;
	}
	tmp = size;
	return (tmp);
}

t_list	*ft_cutlast(t_list **list, int c)
{
	while (c > 1)
	{
		*list = (*list)->next;
		c--;
	}
	(*list)->next = NULL;
	return (*list);
}

void	ft_rushbtest(t_list **lista, t_list **listb, int mid)
{
	t_list	*tmp;
	int		size;

	tmp = *lista;
	size = ft_lstsize(*lista);
	size = size / 2;
	if (tmp->content <= mid)
		*listb = push_b(lista, *listb);
	else if (tmp->next->content <= mid)
		*lista = swap_a(*lista);
	else if (ft_findmidalg(lista, mid) > size)
		*lista = reverse_a(*lista);
	else
		*lista = rotate_a(*lista);
}
