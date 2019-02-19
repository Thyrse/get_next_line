/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 04:59:16 by tefourge          #+#    #+#             */
/*   Updated: 2018/01/29 05:59:55 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t x;
	size_t y;

	i = size;
	x = ft_strlen(src);
	y = ft_strlen(dest);
	if (!dest || !src)
		return (0);
	while (*dest && size)
	{
		dest++;
		size--;
	}
	if (size == 0)
		return (i + x);
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (y + x);
}
