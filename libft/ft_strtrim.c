/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 19:59:18 by tefourge          #+#    #+#             */
/*   Updated: 2017/12/10 18:19:09 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t length;
	size_t start;
	size_t x;

	start = 0;
	if (!s)
	{
		return (NULL);
	}
	while (ft_isspace(s[start]))
	{
		start++;
	}
	if (s[start] == '\0')
	{
		return (ft_strnew(s[start]));
	}
	x = ft_strlen(s);
	while (0 < x && ft_isspace(s[x - 1]))
	{
		x--;
	}
	length = x - start;
	return (ft_strsub(s, start, length));
}
