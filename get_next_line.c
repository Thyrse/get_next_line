/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:50:46 by tefourge          #+#    #+#             */
/*   Updated: 2019/01/15 17:15:17 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	get_read(char **str, char **line, int ret, int fd)
{
	char *tmp;
	char buf[BUFF_SIZE + 1];

	tmp = NULL;
	if ((fd < 0 || line == NULL) || (!*str && !(*str = ft_strnew(0))))
		return (-1); // On cree un tableau vide
	while ((!**str || !ft_strchr(*str, '\n')) && (ret = read(fd, buf, BUFF_SIZE)) > 0) // Si read a lu au moins un char
	{
		buf[ret] = '\0';
		if (!(tmp = ft_strjoin(*str, buf)))
		{
			ft_strdel(str);
			return (-1); // On join str & buf dans un tableau
		}
		if (str)
			ft_strdel(str);
		*str = tmp; // On place ca dans notre static
		if (ft_strchr(*str, '\n')) // Des qu'il trouve un \n, la boucle s'arrete
			break ;
	}
	return (ret);
}

int	search_char(char **str, char **line, int ret, int i)
{
	char *tmp;

	tmp = NULL;
	if ((*str)[i] == '\n')
	{
		if (!(*line = ft_strsub(*str, 0, i)))
			return (-1); // Dans str, on part de 0 puis on va jusque i, où se trouve le \n > Dans line
		if (!(tmp = ft_strdup(&((*str)[i + 1]))))
			return (-1);
		free(*str);
		*str = tmp;
		if (**str == '\0')
			ft_strdel(str);
	}
	else if (str[i] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (0);
		if (!(*line = ft_strdup(*str)))
			return (-1);
		ft_strdel(str);
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char *str = NULL; // La static, qui va contenir tout ce qui est lu
	int			i;
	int			ret;

	i = 0;
	ret = -42;
	ret = get_read(&str, line, ret, fd); // ICI LA PARTIE DE GET_READ COUPEE
	if ((ret == 0 && (str == NULL || str[0] == '\0')) || ret == -1)
	{
		ft_strdel(&str);
		if (ret == -1)
			return (-1);
		return (0);
	}
	if (str[i])
	{
		while (str[i] != '\n' && str[i] != '\0') // On recupere l'index du \n
			i++;
		return (search_char(&str, line, ret, i));
	}
	else if (!(*line = ft_strdup("")))
		return (-1);
	else
		return (1);
	return (0);
}
