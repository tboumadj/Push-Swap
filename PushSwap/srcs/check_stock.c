/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stock.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:29:13 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/08 13:36:10 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_checkandstock(const char *str, int *tab, int c)
{
	int		i;
	int		t;
	long	nb;

	i = 0;
	t = 0;
	nb = 0;
	while (str[i])
	{
		while ((str[i] <= 32) || (str[i] == 43))
			i++;
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == 45)
		{
			nb += ft_atoi(&str[i]);
			if (str[i] == 45)
				i++;
			while (str[i] >= 48 && str[i] <= 57)
				i++;
		}
		tab[t++] = nb;
		nb = 0;
		if (t > (c - 1))
			return (tab);
	}
	return (tab);
}

void	checkdoublenb(int *tab, int size)
{
	int	i;
	int	j;
	int	c;
	int	k;
	int	nb;

	i = 0;
	j = 0;
	c = 0;
	k = 0;
	while (++j < size)
	{
		nb = tab[k++];
		while (i < size)
		{
			if (nb == tab[i])
				c++;
			if (c > 1)
				ft_printerror();
			i++;
		}
		i = 0;
		c = 0;
	}
}

t_list	*stock_a(int *tab, int c)
{
	int		i;
	t_list	*stack_a;

	i = c - 1;
	stack_a = malloc(sizeof(t_list));
	stack_a->next = NULL;
	stack_a->content = tab[i];
	while (--i >= 0)
	{
		stack_a = add_link(stack_a, tab[i]);
	}
	return (stack_a);
}
