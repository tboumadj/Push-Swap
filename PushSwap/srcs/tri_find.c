/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_find.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:47:04 by tboumadj@student  #+#    #+#             */
/*   Updated: 2022/08/06 16:41:34 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_tronc(t_list **lista, int size)
{
	int	tmp;
	int	mid;
	int	i;

	tmp = find_min(lista);
	i = 0;
	while (++i < size)
	{
		tmp = find_midtronc(lista, tmp);
		mid = tmp;
	}
	return (mid);
}

int	find_midtronc(t_list **lista, int load)
{
	int		flx;
	t_list	*tmp;

	flx = find_big(lista);
	tmp = *lista;
	while (tmp)
	{
		if ((tmp->content > load) && (tmp->content < flx))
			flx = tmp->content;
		tmp = tmp->next;
	}
	return (flx);
}

int	ft_findaction(t_list **list, int nb)
{
	int	a;
	int	r;

	a = ft_findmidalg(list, nb);
	r = ft_findmidalgreverse(list, nb);
	if (r < a)
		return (1);
	else
		return (2);
}

int	ft_findmidalg(t_list **list, int nb)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *list;
	while (tmp)
	{
		if (tmp->content <= nb)
			return (i);
		else
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}

int	ft_findmidalgreverse(t_list **list, int nb)
{
	t_list	*tmp;
	int		i;
	int		j;
	int		size;

	i = 1;
	j = 0;
	tmp = *list;
	size = ft_lstsize(*list);
	size = size / 2;
	while (j++ < size)
	{
		tmp = tmp->next;
		i++;
	}
	j = 0;
	while (tmp)
	{
		if (tmp->content <= nb)
			j = i;
		tmp = tmp->next;
		i++;
	}
	j = i - j;
	return (j);
}
