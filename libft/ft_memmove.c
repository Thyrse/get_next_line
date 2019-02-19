/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 01:48:38 by tefourge          #+#    #+#             */
/*   Updated: 2018/12/06 18:09:19 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest == src)
	{
		return (dest);
	}
	if (dest < src)
	{
		ft_memcpy(dest, src, len);
	}
	else
	{
		ft_revmemcpy(dest, src, len);
	}
	return (dest);
}
