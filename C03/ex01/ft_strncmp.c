/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduclaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 07:47:19 by aduclaux          #+#    #+#             */
/*   Updated: 2021/03/20 11:26:48 by aduclaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && s1[i] != 0 && s2[i] != 0 && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
