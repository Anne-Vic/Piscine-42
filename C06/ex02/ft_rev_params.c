/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 08:42:03 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/20 08:45:14 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[argc - i] != argv[0])
	{
		j = 0;
		while (argv[argc - i][j] != 0)
		{
			ft_putchar(argv[argc - i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
