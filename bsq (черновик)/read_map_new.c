/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:50:43 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 17:19:17 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

/*void	zap_usl(int fd, char empty, char stop, char fill, int m)
{
	char	buf[1];
	int		k_str;
	read(fd, buf, 1);
	k_str = 0;
	while (*buf >= '0' && *buf <= '9')
	{
		k_str = k_str * 10 + (*buf - '0');
		read(fd, buf, 1);
	}
	*empty = *buf;
	read(fd, stop, 1);
	read(fd, fill, 1);
	read(fd, buf, 1);
	read(fd, buf, 1);
	while (*buf != '\n')
	{
		m++;
		read(fd, buf, 1);
	}
	return ;
	}*/

void	zapoln_map(char *filename)
{
	int 	m;
	char 	buf[1];
	int 	fd;
	int		k_str;
	char	empty[1];
	char	stop[1];
	char	fill[1];
	char	*map;
	int		 i;

	fd = open(filename, O_RDONLY);
	if (fd >= 0)
	{
		read(fd, buf, 1);
		k_str = 0;
		m = 1;
//		zap_usl(fd, empty[0], stop[0], fill[0], m);	
		while (*buf >= '0' && *buf <= '9')
			{
				k_str = k_str * 10 + (*buf - '0');
				read(fd, buf, 1);
			}
			*empty = *buf;
			read(fd, stop, 1);
			read(fd, fill, 1);
  			read(fd, buf, 1);
			read(fd, buf, 1);
			while (*buf != '\n')
			{
				m++;
				read(fd, buf, 1);
			}
		close(fd);

		fd = open(filename, O_RDONLY);
		read(fd, buf, 1);
		while (*buf != '\n')
			read(fd, buf, 1);
		read(fd, buf, 1);

		i = 0;
		map = (char *)malloc(sizeof(char) * (k_str * m + 1));
		while (*buf != '\0')
		{
			map[i] = buf[0];
			i++;
			read(fd, buf, 1);
		}
		map[i] = '\0';
		close(fd);
		if (error_map(map, empty[0], stop[0], fill[0], m) == 0)
			find_map(map, m, empty[0], fill[0]);
		else
			write(1, "map error\n", 10);
	}
}

int	main(int	argc, char **argv)
{
	int	i;

	i = 1;

	if (argc >1)
		while (i < argc)
		{
			zapoln_map(argv[i]);
			i++;
		}
	return (0);
}
