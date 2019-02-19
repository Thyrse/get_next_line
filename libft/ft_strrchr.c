/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:22:10 by tefourge          #+#    #+#             */
/*   Updated: 2018/01/29 17:29:56 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ret;

	i = 0;
	ret = (char)c;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		if (ret == s[i])
		{
			return ((char*)&s[i]);
		}
		i--;
	}
	if (s[i] == ret)
	{
		return ((char*)&s[i]);
	}
	return (0);
}
