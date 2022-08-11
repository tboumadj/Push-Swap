/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboumadj <tboumadj@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:37:23 by tboumadj          #+#    #+#             */
/*   Updated: 2022/08/08 13:38:11 by tboumadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		c;
	int		*tab;
	t_list	*stack_a;
	t_list	*stack_b;

	c = 0;
	if (argc == 1)
		exit (EXIT_FAILURE);
	if (argv[1][0] == '\0')
		exit (EXIT_FAILURE);
	if (argc == 2)
		c = checksize(&argv[1][0]);
	else if (argc > 2)
		c = checkdoublesize(argc, argv);
	tab = malloc(sizeof(int *) * c);
	tab = all_check(argc, argv, tab, c);
	stack_a = stock_a(tab, c);
	stack_b = NULL;
	free(tab);
	tri_check(&stack_a, &stack_b);
	ft_freeall_lst(stack_a);
	free(stack_b);
	return (0);
}

int	*all_check(int argc, char **argv, int *tab, int c)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		if (argc == 2)
		{
			ft_checkalpha(&argv[1][i]);
			ft_checkandstock(&argv[1][i], tab, c);
			checkdoublenb(tab, c);
		}
		else if (argc > 2)
			ft_checkarg(argc, argv, tab, c);
		checkdoublenb(tab, c);
	}
	return (tab);
}
