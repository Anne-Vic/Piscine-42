/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:59:15 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/15 16:41:43 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_str_is_alpha(char *str)
{
	int i;
	int alpha;

	i = 0;
	alpha = 0;
	if (ft_strlen(str) == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
			alpha++;
		}
		i++;
	}
	if (alpha == ft_strlen(str))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
