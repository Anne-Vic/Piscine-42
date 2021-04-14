/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 07:45:40 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/20 08:03:55 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power <= 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
