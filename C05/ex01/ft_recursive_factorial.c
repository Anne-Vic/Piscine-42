/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 07:30:40 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/20 07:38:06 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (res * ft_recursive_factorial(res - 1));
}
