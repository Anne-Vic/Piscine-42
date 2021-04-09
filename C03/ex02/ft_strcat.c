/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 07:59:44 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/16 11:48:11 by aduclaux         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int dest_length;
	int src_length;
	int i;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = 0;
	while (i < src_length)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = 0;
	return (dest);
}
