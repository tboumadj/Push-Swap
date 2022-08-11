/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:09:46 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 17:33:45 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(long))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

void	del(void *a)
{
	ft_printf("remove %s\n", (char *)a);
	return ;
}
