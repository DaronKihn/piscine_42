/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:50:43 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/10 18:23:53 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

int		kol_str(int fd, char *symb)
{
	char	buf[1];
	int		k_str;

	k_str = 0;
	read(fd, buf, 1);
	while (*buf >= '0' && *buf <= '9')
	{
		k_str = k_str * 10 + (*buf - '0');
		read(fd, buf, 1);
	}
	symb[0] = *buf;
	read(fd, buf, 1);
	symb[1] = buf[0];
	read(fd, buf, 1);
	symb[2] = buf[0];
	read(fd, buf, 1);
	return (k_str);
}

int		kol_symb(int fd)
{
	char	buf[1];
	int		m;

	m = 1;
	read(fd, buf, 1);
	while (*buf != '\n')
	{
		m++;
		read(fd, buf, 1);
	}
	return (m);
}

void	make_map(int fd, int k_str, int m, char *symb)
{
	int		i;
	char	buf[1];
	char	*map;

	read(fd, buf, 1);
	while (*buf != '\n')
		read(fd, buf, 1);
	map = (char *)malloc(sizeof(char) * (k_str * m + 1));
	i = 0;
	while (read(fd, buf, 1) && i <= k_str * m)
	{
		map[i] = buf[0];
		i++;
	}
	map[k_str * m] = '\0';
	if (error_map(map, symb, m, k_str) == 0)
		find_map(map, m, symb[0], symb[2]);
	else
		write(1, "map error\n", 10);
}

void	read_map(char *filename)
{
	int		m;
	int		fd;
	int		k_str;
	char	symb[3];

	fd = open(filename, O_RDONLY);
	if (fd >= 0)
	{
		k_str = kol_str(fd, symb);
		m = kol_symb(fd);
		close(fd);
		fd = open(filename, O_RDONLY);
		make_map(fd, k_str, m, symb);
	}
	close(fd);
}
