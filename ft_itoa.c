/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: al-humea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:53:12 by al-humea          #+#    #+#             */
/*   Updated: 2019/11/19 10:51:42 by al-humea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	nbtoright(char *str, int m)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	str[i + 1] = '\0';
	while (i > m)
	{
		str[i] = str[i - 1];
		i--;
	}
	str[i] = 0;
}

char		*ft_itoa(int nbr)
{
	char	*str;
	int		m;
	long	nb;

	nb = nbr;
	m = 0;
	if (!(str = malloc(12)))
		return (NULL);
	if (nb < 0)
	{
		str[m] = '-';
		nb *= -1;
		m++;
	}
	str[m] = '\0';
	while (nb > 9)
	{
		nbtoright(str, m);
		str[m] = (nb % 10) + 48;
		nb /= 10;
	}
	nbtoright(str, m);
	str[m] = nb + 48;
	return (str);
}
