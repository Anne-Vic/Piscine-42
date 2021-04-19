/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:24:37 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/24 17:47:14 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(*(range) = (int *)malloc(sizeof(*(range)) * (max - min))))
		return (-1);
	else
		while (i < max - min)
		{
			(*range)[i] = min + i;
			i++;
		}
	return (i);
}
