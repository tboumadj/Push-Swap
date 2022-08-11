/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:29:29 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/05 23:48:24 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*rotate(t_list *list)
{
	t_list	*nw;

	nw = list;
	nw->content = list->content;
	list = ft_lstadd_back(list, nw);
	return (list);
}

t_list	*rotate_a(t_list *list)
{
	t_list	*nw;

	if (ft_lstsize(list) > 1)
	{
		nw = list;
		nw->content = list->content;
		list = ft_lstadd_back(list, nw);
		ft_printf("ra\n");
	}
	return (list);
}

t_list	*rotate_b(t_list *list)
{
	t_list	*nw;

	if (ft_lstsize(list) > 1)
	{
		nw = list;
		nw->content = list->content;
		list = ft_lstadd_back(list, nw);
		ft_printf("rb\n");
	}
	return (list);
}

int	*rotate_double(t_list **lista, t_list **listb)
{
	if ((*lista && *listb) && (ft_lstsize(*lista) > 1
			&& ft_lstsize(*listb) > 1))
	{
		*lista = rotate(*lista);
		*listb = rotate(*listb);
		ft_printf("rr\n");
	}
	return (0);
}
