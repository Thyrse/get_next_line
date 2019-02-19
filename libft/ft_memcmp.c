/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 04:15:21 by tefourge          #+#    #+#             */
/*   Updated: 2018/01/29 05:56:55 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	*ret2;

	i = 0;
	ret = (unsigned char *)s1;
	ret2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ret[i] != ret2[i])
		{
			return (ret[i] - ret2[i]);
		}
		i++;
	}
	return (0);
}
