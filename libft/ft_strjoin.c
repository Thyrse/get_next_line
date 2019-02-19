/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 01:13:14 by tefourge          #+#    #+#             */
/*   Updated: 2018/02/04 00:15:15 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
	{
		return (NULL);
	}
	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!new)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	new = ft_strcpy(new, (char *)s1);
	new = ft_strcat(new, (char *)s2);
	new[i] = '\0';
	return (new);
}
