/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 08:12:28 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/15 08:36:20 by aduclaux         ###   ########.fr       */
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

int		ft_str_is_uppercase(char *str)
{
	int i;
	int other;

	i = 0;
	other = 0;
	if (ft_strlen(str) == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91))
		{
			other++;
		}
		i++;
	}
	if (other > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
