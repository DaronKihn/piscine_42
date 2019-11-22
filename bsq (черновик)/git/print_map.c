/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:06:20 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 19:13:37 by dkihn            ###   ########.fr       */
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

void	print_map(char *map, int *mas_max, int m, char fill)
{
	int i;

	i = 0;
	while (map[i])
	{
		if (sym_men(i, m, mas_max[0], mas_max[1]) == 1)
			map[i] = fill;
		write(1, &map[i], 1);
		i++;
	}
}
