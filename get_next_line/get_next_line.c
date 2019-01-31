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

//On recupere et retourne l'index du char recherche
/* int	get_line(const char *s, char **line, int ret)
{
	char *tmp;
	int	len;

	len = 0;
	while (s[len] != '\n' && s[len])
	{
		i++;
	}
	if (s[len] == '\n')
	{
		*line = ft_strsub(s, 0, len);
		tmp = ft_strdup(s + len + 1);
		free(s);
		s = tmp;
		if(s[0] == '\0')
		{
			ft_strdel(&s);
		}
	}
	else if (s[len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s);
		ft_strdel(&s);
	}
	return (1);
} */
// On recupere le morceau de ligne trouve, a partir du resultat de get_char()
/* int	put_line(char *src, char *dest, int fd)
{
	int getchar;
	getchar = 0;

	if ((getchar = get_char(src, '\n'))) // Si get_char() a bien trouve le \n
	{
		dest = ft_strsub(src, 0, getchar); // On stocke la parcelle dans dest
		return 1; // C'est trouve, on return 1 pour dire que c'est bon  
	}
	return (0); // Pas de \n, la fonction est un echec
} */

int	get_next_line(const int fd, char **line)
{
	static char *str = NULL; // La static, qui va contenir tout ce qui est lu
	char buf[BUFF_SIZE + 1]; // Le tableau dans lequel on retourne les lignes
	char		*tmp; // Pour swap et liberer proprement la memoire
	int			i;
	int			ret;

	i = 0;

	if(fd < 0)
	{
		return -1;
	}
	if(!str)
		str = ft_strnew(0); // On cree un tableau vide
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0) // Si read a lu au moins un char
	{
		buf[ret] = '\0';
		tmp = ft_strjoin(str, buf); // On join str & buf dans un tableau
		if (str)
			ft_strdel(&str);
		str = tmp; // On place ca dans notre static
		if (ft_strchr(buf, '\n'))
			break;
	}
	if (ret == -1)
		return -1;
	//printf("%s", str);
	if (str[i])
	{
		while (str[i] != '\n' && str[i]) // On recupere l'index du \n
		{
			i++;
		}
		if(i == 0) // Index a 0 car ligne vide
			*line = ft_strdup(""); // On ne met donc rien dans line
		else
		{
			*line = ft_strsub(str, 0, i); // Dans str, on part de 0 puis on va jusque i, où se trouve le \n. --> Dans line
		}
		tmp = ft_strdup(&str[i + 1]);
		if (str)
			ft_strdel(&str);
		str = tmp;
		// str = &str[i + 1]; // On replace le debut de str a l'index \n +1, donc apres la premiere ligne
		//printf("%s", *line);
		return (1); // Ca a fonctionne, on retourne 1
	}
	else
		*line = ft_strdup(""); // Str n'existe pas, on renvoie une chaine vide
	return (0);


	//-----------------------------------------------------------------------------


	/*		while((ret = read(fd, buf, BUFF_SIZE)) > 0)
			{
	 *line = ft_strnew(0);
	 if (!str)
	 str = ft_strnew(0);
	 if (put_line(str, *line fd) == 1)
	 {
	 printf("%s", "OUI CA MARCHE ");
	 return (1);
	 }

	 printf("%s", str);
	 while (buf[i] != '\n')
	 {
	 i++;
	 }
	//buf[i] => '\n';
	buf[i] = '\0';
	buf[ret] = '\0';
	tmp = ft_strjoin(*line, buf);
	free(*line);
	 *line = tmp;
	 printf("%s", tmp);
	 str = ft_strdup(&(buf[i + 1]));
	 i = 0;
	 printf("%s", str);
	 }
	 printf("%s", "JE SUIS SORTI");
	 return (0); 
	 */

	//-----------------------------------------------------------------------------


	/*	static char *buf;
		static int yolo;
		static int ret;
		static int getchar;
		char *tmp;
		static char *str; */
	//	yolo = 0;
	//	ret = 0;
	//	getchar = 0;
	//	buf = ft_strnew(BUFF_SIZE);
	// ret = read(fd, buf, BUFF_SIZE);
	//	str = ft_strnew(BUFF_SIZE);
	//	printf("%s", buf);
	//	printf("%s", buf);
	//printf("%d", getchar);
	//printf("%d", getchar);
	/*	while ((ret = read(fd, buf, BUFF_SIZE)))
		{
		getchar = get_char(buf, '\n');
		while ((ret - ft_strlen(tmp)) > 0)
		{
		tmp = ft_strsub(buf, yolo, getchar);
	//	printf("%s\n", tmp);
	str = ft_strjoin(str, tmp);
	printf("%s\nCONTENU DE STR : ", str);
	//printf("%d\nSTRLEN TMP : ", ft_strlen(tmp));
	//	printf("%s\n", ft_strsub(buf, yolo, getchar));
	yolo = getchar;
	//	printf("%d\nVALEUR YOLO : ", yolo);
	getchar = get_char(buf, '\n');
	//	printf("%d\n VALEUR : ", ret);
	ret = ret - ft_strlen(tmp);;
	get_next_line(fd, line);
	free(tmp);
	}
	}
	return (0);
	}*/
	}
