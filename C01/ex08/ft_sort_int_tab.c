/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 09:03:27 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/14 10:03:42 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int compt;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		compt = 1;
		while (j < size)
		{
			temp = tab[i];
			if (tab[i] > tab[i + compt])
			{
				tab[i] = tab[i + compt];
				tab[i + compt] = temp;
			}
			compt++;
			j++;
		}
		i++;
	}
}
