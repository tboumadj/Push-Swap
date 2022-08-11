/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:05:08 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/11 14:44:46 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_all(int *tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(&tab[i]);
		i++;
	}
	return ;
}

void	ft_freeall_lst(t_list *list)
{
	t_list	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
	return ;
}

void	ft_printerror(void)
{
	write (2, "Error\n", 6);
	exit (EXIT_FAILURE);
}
