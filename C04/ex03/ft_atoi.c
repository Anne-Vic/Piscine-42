/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 08:50:47 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/22 16:28:24 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_negative(char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45
				|| str[i] == 32 || (str[i] > 8 && str[i] < 14)))
	{
		str[i] == 45 ? sign *= (-1) : sign;
		i++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int number;
	int i;

	number = 0;
	i = 0;
	while (str[i] && (str[i] == 32 || (str[i] > 8 && str[i] < 14)))
	{
		i++;
	}
	while (str[i] && (str[i] == 43 || str[i] == 45
				|| (str[i] > 47 && str[i] < 58)))
	{
		if (str[i] > 47 && str[i] < 58)
		{
			while (str[i] && str[i] > 47 && str[i] < 58)
			{
				number = number * 10 + (str[i] - 48);
				i++;
			}
			return (number * ft_is_negative(str));
		}
		i++;
	}
	return (0);
}
