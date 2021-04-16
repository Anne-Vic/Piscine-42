/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 08:46:25 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/23 08:11:50 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char*)s2);
}

char	**sort(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		compt;

	i = 1;
	while (i < argc - 1)
	{
		compt = 1;
		while (i + compt < argc)
		{
			if (ft_strcmp(argv[i], argv[i + compt]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + compt];
				argv[i + compt] = temp;
			}
			compt++;
		}
		i++;
	}
	return (argv);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	sort(argc, argv);
	while (argv[i] != 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
