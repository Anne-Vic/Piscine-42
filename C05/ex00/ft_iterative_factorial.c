/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 07:23:44 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/29 08:09:10 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		while (nb > 1)
		{
			res = res * (nb - 1);
			nb--;
		}
	return (res);
}

#include <stdio.h>

int main(void)
{
printf("%d\n", ft_iterative_factorial(13));
return 0;
}
