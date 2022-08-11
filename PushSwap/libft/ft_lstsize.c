/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:10:08 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 17:36:12 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*list;
	int		i;

	i = 0;
	list = lst;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	ft_printlstsize(t_list *lst)
{
	t_list	*list;
	int		i;

	i = 0;
	list = lst;
	while (list)
	{
		list = list->next;
		i++;
	}
	printf("nombre de maillon = %d\n", i);
}
