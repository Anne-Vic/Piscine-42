/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:26:45 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/18 11:05:22 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int length;

	i = 0;
	j = 0;
	k = 0;
	length = ft_strlen(str);
	if (ft_strlen(to_find) == 0)
		return (str);
	while (i < length)
	{
		k = i;
		while (str[k] == to_find[j])
		{
			k++;
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
