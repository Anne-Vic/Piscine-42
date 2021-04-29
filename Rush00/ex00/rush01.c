/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguignie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 08:56:52 by pguignie          #+#    #+#             */
/*   Updated: 2021/03/14 16:40:03 by pguignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_loops(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) ||
				(i == x && j == y && x != 1 && y != 1))
				ft_putchar('/');
			else if ((i == 1 && j == y) ||
					(i == x && j == 1))
				ft_putchar('\\');
			else if (i == 1 || j == 1 || i == x || j == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		ft_loops(x, y);
}
