/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 21:16:37 by tefourge          #+#    #+#             */
/*   Updated: 2018/01/29 06:00:19 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t length;

	length = ft_strlen(to_find);
	if (length == 0)
	{
		return ((char *)str);
	}
	while (*str && length <= n--)
	{
		if (ft_memcmp(str, to_find, length) == 0)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
