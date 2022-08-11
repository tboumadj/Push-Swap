/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:26:52 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/11 14:40:22 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*reverse(t_list *list)
{
	t_list	*tmp;
	int		c;

	if (ft_lstsize(list) > 1)
	{
		tmp = ft_copy_lastlst(list);
		c = 0;
		c = ft_lstsize(list);
		c--;
		tmp->next = list;
		ft_cutlast(&list, c);
		list = tmp;
	}
	return (list);
}

t_list	*reverse_a(t_list *list)
{
	t_list	*tmp;
	int		c;

	if (ft_lstsize(list) > 1)
	{
		tmp = ft_copy_lastlst(list);
		c = 0;
		c = ft_lstsize(list);
		c--;
		tmp->next = list;
		ft_cutlast(&list, c);
		list = tmp;
		ft_printf("rra\n");
	}
	return (list);
}

t_list	*reverse_b(t_list *list)
{
	t_list	*tmp;
	int		c;

	if (ft_lstsize(list) > 1)
	{
		tmp = ft_copy_lastlst(list);
		c = 0;
		c = ft_lstsize(list);
		c--;
		tmp->next = list;
		ft_cutlast(&list, c);
		list = tmp;
		ft_printf("rrb\n");
	}
	return (list);
}

int	*reverse_double(t_list **lista, t_list **listb)
{
	if ((*lista && *listb) && (ft_lstsize(*lista) > 1
			&& ft_lstsize(*listb) > 1))
	{
		*lista = reverse(*lista);
		*listb = reverse(*listb);
		ft_printf("rrr\n");
	}
	return (0);
}
