/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:13:39 by tefourge          #+#    #+#             */
/*   Updated: 2018/12/23 20:55:37 by tefourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <sys/stat.h>
# include <sys/fcntl.h>

int        main(int ac, char **av)
{
	int        fd;
	char    *line = NULL;

	if (ac == 2)
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
		{
			return (-1);
		}
		while (get_next_line(fd, &line))
		{
			ft_putstr("LIGNE : ");
			ft_putendl(line);
			free(line);
		}
	}
	return (0);
}
