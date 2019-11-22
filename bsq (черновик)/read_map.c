/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:50:43 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 13:39:28 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

/*void	print(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		write(1, &c[i++], 1);
		}*/

void	zapoln_map(char *filename)
{
	int 	m;
	char 	buf[1];
	int 	fd;
	int		k_str;
	char	empty;
	char	stop;
	char	fill;
	char	*map = NULL;
	char	i;

	fd = open(filename, O_RDONLY);
	if (fd >= 0)
	{
//progonyaem 
//zapisat kol-vo strok
//zapisat sym (zapolnenie kvadrata)
//zapisat stop
//zapisat empty (pustota)
//vydelyaem pamyat na massiv strok
		read(fd, buf, 1);
//		buf[1] = '\0';
	
		k_str = 0;
		m = 0;
		if (*buf != '\n') //schita
		{
			while (*buf >= '0' && *buf <= '9')
			{
				k_str = k_str * 10 + (*buf - '0');
				read(fd, buf, 1);
			}
			empty = *buf;
			read(fd, buf, 1);
			stop = *buf;
			read(fd, buf, 1);
            fill = *buf;
			read(fd, buf, 1);	
			read(fd, buf, 1); // buf == 1 simv 1 str
			while (*buf != '\n')
			{
				m++;
				read(fd, buf, 1);
			}
			m++;

		}
		else
			return;

	}
	close(fd);

	fd = open(filename, O_RDONLY);
	if (fd >= 0)
	{
		read(fd, buf, 1);
		while (*buf != '\n')
			read(fd, buf, 1);
		read(fd, buf, 1);

		i = 0;
		map = (char *)malloc(sizeof(char) * (k_str * m + 1));
		while (*buf != '\0')
		{
			map[i] = *buf;
			read(fd, buf, 1);
			i++;
		} 
		map[i] = '\0';
	}
	close(fd);
//	print(map);	
//	print_map(map, 1, m, 2, fill);
	find_map(map, m, empty, fill);
	return ;

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
