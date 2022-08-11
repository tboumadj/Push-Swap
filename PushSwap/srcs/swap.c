/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:47:30 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 16:33:57 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*swap_neutre(t_list *list)
{
	int	nb;

	if (list == NULL)
		return (list);
	{
		nb = list->content;
		list->content = list->next->content;
		list->next->content = nb;
	}
	return (list);
}

t_list	*swap_a(t_list *list)
{
	int	nb;

	if (list == NULL)
		return (list);
	if (ft_lstsize(list) > 1)
	{
		nb = list->content;
		list->content = list->next->content;
		list->next->content = nb;
		ft_printf("sa\n");
	}
	return (list);
}

t_list	*swap_b(t_list *list)
{
	int	nb;

	if (list == NULL)
		return (list);
	if (ft_lstsize(list) > 1)
	{
		nb = list->content;
		list->content = list->next->content;
		list->next->content = nb;
		ft_printf("sb\n");
	}
	return (list);
}

int	*swap_double(t_list **lista, t_list **listb)
{
	if ((*lista && *listb) && (ft_lstsize(*lista) > 1
			&& ft_lstsize(*listb) > 1))
	{
		*lista = swap_neutre(*lista);
		*listb = swap_neutre(*listb);
		ft_printf("ss\n");
	}
	return (0);
}
