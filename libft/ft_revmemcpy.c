/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revmemcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 05:22:56 by tefourge          #+#    #+#             */
/*   Updated: 2018/12/06 18:09:02 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_revmemcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*cpy;

	i = n;
	tmp = (unsigned char*)dest;
	cpy = (unsigned char*)src;
	while (i > 0)
	{
		tmp[i - 1] = cpy[i - 1];
		i--;
	}
	return (tmp);
}
