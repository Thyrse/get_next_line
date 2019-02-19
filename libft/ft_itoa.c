/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 01:17:32 by tefourge          #+#    #+#             */
/*   Updated: 2018/01/29 06:07:41 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_nbrs(int n)
{
	size_t i;

	i = 1;
	while (n /= 10)
	{
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	size_t	nbr;

	len = count_nbrs(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = nbr % 10 + '0';
	while (nbr /= 10)
	{
		str[--len] = nbr % 10 + '0';
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
