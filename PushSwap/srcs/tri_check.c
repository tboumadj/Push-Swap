/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:00:51 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/05 23:55:39 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*tri_check(t_list **lista, t_list **listb)
{
	if (check_done(*lista) == 0)
		tri_poloski(lista, listb);
	else if (check_done(*lista) == 1)
		return (0);
	return (0);
}

int	check_done(t_list *list)
{
	while (list->next != NULL)
	{
		if (list->content > list->next->content)
			return (0);
		else
			list = list->next;
	}
	return (1);
}

int	check_failsize(t_list *list)
{
	int	i;

	i = 2;
	while (list->next != NULL)
	{
		if (list->content > list->next->content)
			return (i);
		else
		{
			list = list->next;
			i++;
		}
	}
	return (i);
}

int	check_doneb(t_list *list)
{
	while (list->next != NULL)
	{
		if (list->content < list->next->content)
			return (0);
		else
			list = list->next;
	}
	return (1);
}

int	*tri_doublecheck(t_list **lista, t_list **listb)
{
	if ((check_done(*lista) != 1) || (check_doneb(*listb) != 1) || (listb))
		ft_doubletri(lista, listb);
	else if (check_done(*lista) == 1 && (!*listb))
		return (0);
	return (0);
}
