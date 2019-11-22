/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:37:13 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 15:04:31 by sbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		col(char *map, int i, int m, char empty)
{
	int j;
	int j_now;
	int i_now;

	j = 0;
	i_now = i % m;
	j_now = i / m;
	while (map[(j_now + j) * m + i_now] == empty)
		j++;
	return (j);
}

int		vozm(char *map, int i_now, int m, char empty)
{
	int i;
	int j_min;
	int max;

	max = 0;
	i = 0;
	j_min = col(map, i + i_now, m, empty);
	while (map[i + i_now] == empty && i <= j_min)
	{
		i++;
		if ((i > max && i == j_min))
			max = i;
		if (col(map, i + i_now, m, empty) < j_min)
			j_min = col(map, i + i_now, m, empty);
	}
	if (max == 0 && map[0] == empty)
		max = 1;
	return (max);
}

void	find_map(char *map, int m, char empty, char fill)
{
	int i;
	int max_i;
	int max;

	i = 0;
	max_i = 0;
	max = vozm(map, 0, m, empty);
	while (map[i])
	{
		if (vozm(map, i, m, empty) > max)
		{
			max = vozm(map, i, m, empty);
			max_i = i;
		}
		i++;
	}
	print_map(map, max_i, m, max, fill);
}
