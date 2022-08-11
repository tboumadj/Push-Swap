/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_klasovski.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 21:21:49 by tboumadj@student  #+#    #+#             */
/*   Updated: 2022/08/06 16:49:22 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_list **lista)
{
	int		min;
	t_list	*tmp;

	tmp = *lista;
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	find_big(t_list **lista)
{
	int		n;
	t_list	*tmp;

	tmp = *lista;
	n = tmp->content;
	while (tmp)
	{
		if (tmp->content > n)
			n = tmp->content;
		tmp = tmp->next;
	}
	return (n);
}

int	find_tmp(t_list **lista, int nb, int min)
{
	int		n;
	t_list	*tmp;

	n = min;
	tmp = *lista;
	while (tmp)
	{
		if ((tmp->content > n) && (tmp->content < nb))
			n = tmp->content;
		tmp = tmp->next;
	}
	return (n);
}

int	find_nextmin(t_list **list, int nb)
{
	t_list	*tmp;
	int		n;

	tmp = *list;
	n = find_min(list);
	while (tmp)
	{
		if ((tmp->content > n) && (tmp->content < nb))
			n = tmp->content;
		tmp = tmp->next;
	}
	return (n);
}

int	ft_checkfindnb(t_list **list, int nb)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *list;
	while (tmp)
	{
		if (tmp->content == nb)
			return (i);
		else
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
