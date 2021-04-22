/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:55:24 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/31 14:22:12 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i <= ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char				*ft_strdup(char *src)
{
	char *copy;

	if (!(copy = (char *)malloc(sizeof(*copy) * (ft_strlen(src) + 1))))
		return (0);
	else
	{
		ft_strcpy(copy, src);
		return (copy);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab_struct;

	if (!(tab_struct = (t_stock_str *)malloc(sizeof(*tab_struct) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab_struct[i].str = av[i];
		tab_struct[i].size = ft_strlen(av[i]);
		tab_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_struct[i].str = 0;
	return (tab_struct);
}
