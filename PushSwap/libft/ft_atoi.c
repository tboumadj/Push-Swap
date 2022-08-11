/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:10:44 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/06 17:17:25 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	nb;
	int		neg;

	i = 0;
	nb = 0;
	neg = 1;
	while ((str[i] <= 32) || (str[i] == 43))
		i++;
	if (str[i] == 45)
	{
		neg *= -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
		check_atoi(nb, neg);
	}
	return (nb * neg);
}

void	check_atoi(long nb, int neg)
{
	if ((nb * neg) > 2147483647 || (nb * neg) < -2147483648)
		ft_printerror();
	return ;
}
