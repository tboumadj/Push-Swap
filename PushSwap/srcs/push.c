/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:26:12 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/05 23:25:00 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*stocklst(t_list *list, t_list *nw)
{
	if (list == NULL)
	{
		list = nw;
		list->next = NULL;
	}
	else if (list)
	{
		nw->next = list;
		list = nw;
	}
	return (list);
}

t_list	*push_b(t_list **list_a, t_list *list_b)
{
	t_list	*nw;

	if (*list_a == NULL)
		return (list_b);
	nw = *list_a;
	*list_a = (*list_a)->next;
	list_b = stocklst(list_b, nw);
	ft_printf("pb\n");
	return (list_b);
}

t_list	*push_a(t_list **list_b, t_list *list_a)
{
	t_list	*nw;

	if (*list_b == NULL)
		return (list_a);
	nw = *list_b;
	*list_b = (*list_b)->next;
	list_a = stocklst(list_a, nw);
	ft_printf("pa\n");
	return (list_a);
}
