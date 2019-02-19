/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyfichot <lyfichot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:52:59 by lyfichot          #+#    #+#             */
/*   Updated: 2019/01/30 22:04:22 by lyfichot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # define TEST(fd) {\
// 		char	*_str; \
// 		int _fd = fd; \
// 		printf("get_next_line(%d, &%p) == ", _fd, _str); \
// 		int _ret = get_next_line(_fd, &_str); \
// 		printf("%d (str == %p)\n", _ret, str); \
// 	}

#include "get_next_line.h"
#include <stdio.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <sys/stat.h>
# include <sys/fcntl.h>

int		main(int ac, char **av)
{
	char	*str;

	for (int i = 1; i < ac; i++)
	{
		char	*file_name = av[i];

		int fd = open(file_name, O_RDONLY);
		if (fd == -1)
		{
			perror(file_name);
			continue ;
		}
		printf("File %s\n", file_name);
		while(get_next_line(fd, &str) > 0)
		{
			//printf("\t\t%s\n", str);
			ft_putendl(str);
			free(str);
		}
		close(fd);
		printf("File %s done\n\n", file_name);
	}
// 	TEST(-1)
// TEST(15)

	return (0);
}
