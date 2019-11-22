/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 15:00:05 by dkihn             #+#    #+#             */
/*   Updated: 2018/09/27 19:54:10 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ofints;
	int	index;

	if (min >= max)
		return (0);
	else
	{
		ofints = (int*)malloc(sizeof(int) * (max - min));
		index = 0;
		while (min < max)
		{
			ofints[index] = min;
			min++;
			index++;
		}
		return (ofints);
	}
}
