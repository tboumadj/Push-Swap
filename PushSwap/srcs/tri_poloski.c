/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_poloski.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:36:44 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 16:56:41 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*tri_poloski(t_list **lista, t_list **listb)
{
	int	size;

	size = ft_lstsize(*lista);
	if ((check_failsize(*lista) == 2) && (ft_lstsize(*lista) == 2))
	{
		*lista = swap_a(*lista);
		tri_check(lista, listb);
	}
	else if (ft_lstsize(*lista) <= 3)
	{
		while (check_done(*lista) != 1)
			tri_three(lista);
	}
	else if (ft_lstsize(*lista) <= 5)
	{
		if (check_done(*lista) != 1)
			tri_five(lista, listb);
	}
	else if (ft_lstsize(*lista) > 5)
	{
		if (check_done(*lista) != 1)
			tri_newsort(lista, listb, size);
	}
	return (0);
}

void	ft_doubletri(t_list **lista, t_list **listb)
{
	while (check_done(*lista) != 1)
		tri_three(lista);
	while (check_doneb(*listb) != 1)
		tri_doubleb(listb);
	while (*listb)
		*lista = push_a(listb, *lista);
}

void	tri_doubleb(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	if (tmp->content < tmp->next->content)
		*list = swap_b(*list);
	return ;
}

void	tri_three(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	if (tmp->content > tmp->next->content)
		*list = swap_a(*list);
	else
		*list = reverse_a(*list);
}

void	tri_five(t_list **lista, t_list **listb)
{
	int	mid;
	int	size;
	int	lenght;

	size = ft_lstsize(*lista);
	lenght = ft_lstsize(*lista);
	size = size / 2;
	mid = find_tronc(lista, size);
	mid = find_nextmin(lista, mid);
	while (lenght > 3)
	{
		ft_rushbtest(lista, listb, mid);
		lenght = ft_lstsize(*lista);
		mid = find_min(lista);
	}
	tri_doublecheck(lista, listb);
}
