/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_newsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:45:04 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 15:24:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_newsort(t_list **lista, t_list **listb, int size)
{
	int	div;
	int	c;
	int	i;
	int	d;
	int	mid;

	div = ft_finddiv(lista);
	size = (size - 1) / div;
	mid = find_tronc(lista, size);
	i = 0;
	d = 0;
	while (d++ < div)
	{
		while (i < size)
		{
			i += ft_rushmidsize(lista, listb, mid);
			c = i;
			if (c > 1)
				ft_tribafterpush(lista, listb, mid);
		}
		mid = find_tronc(lista, size);
		i = 0;
	}
	tri_secondpart(lista, listb);
}

void	tri_secondpart(t_list **lista, t_list **listb)
{
	int	lenght;

	lenght = ft_lstsize(*lista);
	while (lenght > 2)
	{
		ft_rushmidsizetest(lista, listb);
		lenght = ft_lstsize(*lista);
	}
	if (check_done(*lista) != 1)
		*lista = swap_a(*lista);
	while (*listb)
		ft_returntob(lista, listb);
}

int	ft_rushmidsizetest(t_list **lista, t_list **listb)
{
	t_list	*tmp;
	int		size;
	int		i;
	int		mid;

	size = ft_lstsize(*lista);
	size = size / 2;
	i = 0;
	mid = find_midtronc(lista, size);
	tmp = *lista;
	if (tmp->content <= mid)
	{
		*listb = push_b(lista, *listb);
		i++;
	}
	else if (ft_findmidalg(lista, mid) > size)
		*lista = reverse_a(*lista);
	else
		*lista = rotate_a(*lista);
	return (i);
}

int	ft_rushmidsize(t_list **lista, t_list **listb, int mid)
{
	t_list	*tmp;
	int		size;
	int		i;

	size = ft_lstsize(*lista);
	size = size / 2;
	i = 0;
	tmp = *lista;
	if (tmp->content <= mid)
	{
		*listb = push_b(lista, *listb);
		i++;
	}
	else if (ft_findmidalg(lista, mid) > size)
		*lista = reverse_a(*lista);
	else
		*lista = rotate_a(*lista);
	return (i);
}

int	ft_returntob(t_list **lista, t_list **listb)
{
	t_list	*tmp;
	int		big;
	int		size;
	int		i;

	tmp = *listb;
	big = find_big(listb);
	size = ft_lstsize(*listb);
	size = size / 2;
	i = 0;
	if (tmp->content == big)
	{
		*lista = push_a(listb, *lista);
		i++;
	}
	else if (tmp->next->content == big)
		*listb = swap_b(*listb);
	else if (ft_checkfindnb(listb, big) > size)
		*listb = reverse_b(*listb);
	else
		*listb = rotate_b(*listb);
	return (i);
}
