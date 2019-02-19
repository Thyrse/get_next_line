/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:33:30 by tefourge          #+#    #+#             */
/*   Updated: 2018/01/29 06:01:00 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		search(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[i] && to_find[i] && str[i] == to_find[i])
	{
		i++;
	}
	if (to_find[i] == '\0')
	{
		return (1);
	}
	return (0);
}

char			*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (!to_find[0])
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (search(&(str[i]), to_find))
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
