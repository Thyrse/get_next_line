/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:41:10 by tefourge          #+#    #+#             */
/*   Updated: 2017/12/02 21:12:41 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	size_t			i;

	mem = NULL;
	i = 0;
	mem = (unsigned char *)malloc(size);
	if (mem == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
