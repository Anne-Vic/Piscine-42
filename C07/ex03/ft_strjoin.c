/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 09:55:39 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/29 14:04:41 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int		ft_full_length(int size, char **strs, char *sep)
{
	int strs_length;
	int sep_length;
	int i;
	int j;

	if (size == 0)
		return (0);
	i = 0;
	sep_length = ft_strlen(sep) * (size - 1);
	strs_length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		strs_length += j;
		i++;
	}
	return (strs_length + sep_length);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_length;
	char	*final_str;

	if (size == 0)
	{
		final_str = malloc(0);
		return (final_str);
	}
	full_length = ft_full_length(size, strs, sep);
	if (!(final_str = (char *)malloc(sizeof(*final_str) * (full_length + 1))))
		return (0);
	final_str[0] = '\0';
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(final_str, strs[i]);
		ft_strcat(final_str, sep);
		i++;
	}
	ft_strcat(final_str, strs[i]);
	final_str[full_length] = 0;
	return (final_str);
 }

int main(void)
{
    char    *strs[5];
    char    *join;
    strs[0] = "Coucou";
    strs[1] = "Salut";
    strs[2] = "Bonjour";
    strs[3] = "Hello";
    strs[4] = "Hola";
    join = ft_strjoin(5, strs, "xXx");
    printf("%s\n", join);
    printf("\n");
    return 0;
}
