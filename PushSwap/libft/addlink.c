/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addlink.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:41:57 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 17:03:01 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*add_link(t_list *list, int tab)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = tab;
		tmp->next = list;
	}
	return (tmp);
}
