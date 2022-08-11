/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj@student.42mulhouse.fr <tboumadj>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:57:07 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/11 14:38:01 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkdoublesize(int count, char **str)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	j = 0;
	c = 0;
	while (i < count)
	{
		c += checksize(&str[i][j]);
		i++;
	}
	if (c + 1 > count)
	{
		write (2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
	return (c);
}

int	checksize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57) && (str[i +1] < 48
				|| str[i +1] > 57 || str[i +1] == '\0'))
			c++;
		i++;
	}
	if (c == 0)
	{
		write (2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
	return (c);
}

void	ft_checkalpha(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 48 && str[i] <= 57) || str[i] <= 32)
			i++;
		if (str[i] == 43 || str[i] == 45)
		{
			if ((!(str[i -1] <= 32)) || (!(str[i +1] >= 48 && str[i +1] <= 57)))
			{
				write (2, "Error\n", 6);
				exit (EXIT_FAILURE);
			}
			++i;
		}
		else if ((str[i] > 32) && (!(str[i] >= 48 && str[i] <= 57)
				|| (!(str[i] == 43) && (str[i] == 45))))
		{
			write (2, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
	}
	return ;
}

int	*ft_checkarg(int val, char **str, int *tab, int c)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < val)
	{
		ft_checkalpha(&str[i][j]);
		i++;
	}
	i = 1;
	while (i < val)
	{
		*tab = *ft_checkandstock(&str[i][j], tab, c);
		i++;
		tab++;
	}
	return (tab);
}
