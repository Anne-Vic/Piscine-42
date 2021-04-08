/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:49:47 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/17 07:19:50 by aduclaux         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int i;
	int other;

	i = 0;
	other = 0;
	if (ft_strlen(str) == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	ft_strupcase(str);
	while (i > 0)
	{
		if (str[i] > 64 && str[i] < 91 && ((str[i - 1] > 64 && str[i - 1] < 91)
		|| (str[i - 1] > 47 && str[i - 1] < 58)))
		{
			str[i] += 32;
			i--;
		}
		else
		{
			i--;
		}
	}
	return (str);
}
