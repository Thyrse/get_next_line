/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:54:46 by tefourge          #+#    #+#             */
/*   Updated: 2017/12/02 21:28:36 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;
	int				x;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}
