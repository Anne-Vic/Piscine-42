/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 08:38:15 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/15 09:01:56 by aduclaux         ###   ########.fr       */
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

int		ft_str_is_printable(char *str)
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
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
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
