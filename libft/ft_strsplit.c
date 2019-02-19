/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 15:40:27 by tefourge          #+#    #+#             */
/*   Updated: 2017/12/10 18:19:42 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_getsplit(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	size;

	i = 0;
	x = 0;
	size = 0;
	while (s[i] != '\0')
	{
		while ((s[i] != c) && s[i])
		{
			size++;
			i++;
			if ((s[i] == c) || !s[i])
			{
				tab[x] = ft_strsub(s, (size_t)i - size, size);
				size = 0;
				x++;
			}
		}
		if (s[i])
			i++;
	}
	tab[x] = NULL;
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	x;
	char	**tab;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	if (s[0] != c)
		x++;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && s[i])
		{
			if ((s[i + 1] != c) && (s[i + 1] != '\0'))
				x++;
		}
		i++;
	}
	tab = (char **)malloc(sizeof(char *) * (x + 1));
	if (!tab)
		return (NULL);
	return (ft_getsplit(tab, s, c));
}
