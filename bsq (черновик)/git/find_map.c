 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:37:13 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 19:09:54 by dkihn            ###   ########.fr       */
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
		if ((i > max && i <= j_min))
			max = i;
		if (col(map, i + i_now, m, empty) < j_min)
			j_min = col(map, i + i_now, m, empty);
	}
	return (max);
}

void	find_map(char *map, int m, char empty, char fill)
{
	int i;
	int max_i;
	int max;
	int mas_max[2];

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
	mas_max[0] = max_i;
	mas_max[1] = max;
	print_map(map, mas_max, m, fill);
}
