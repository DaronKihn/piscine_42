/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:06:20 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 12:36:12 by sbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		sym_men(int i_num, int m, int max_i_num, int max)
{
	int j;
	int i;
	int max_i;
	int max_j;

	j = i_num / m;
	i = i_num % m;
	max_j = max_i_num / m;
	max_i = max_i_num % m;
	if (i >= max_i && i < max_i + max && j >= max_j && j < max_j + max)
		return (1);
	return (0);
}

void	print_map(char *map, int max_i, int m, int max, char fill)
{
	int i;

	i = 0;
	while (map[i])
	{
		if (sym_men(i, m, max_i, max) == 1)
			map[i] = fill;
		write(1, &map[i], 1);
		i++;
    }
}

int main()
{
    int i;
	char *map;
	char fill = '+';
	int m = 6;

	map = (char *)malloc(sizeof(char) * (24 + 1));
	i = 0;
	while (i < 24)
	{
		map[i] = '.';
		if ((i + 1) % m == 0)
			map[i] = '\n';
		write(1, &map[i], 1);
		i++;
	}
	map[i] = '\0';
	write(1, "\n", 1);
	print_map(map, 8, m, 2, fill);
	return (0);
}
