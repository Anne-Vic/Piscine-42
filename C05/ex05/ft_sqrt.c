/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 08:09:17 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/22 16:49:43 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int x;

	x = 1;
	if (nb <= 0)
		return (0);
	while (x <= nb / x)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
