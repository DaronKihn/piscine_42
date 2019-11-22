/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:37:22 by dkihn             #+#    #+#             */
/*   Updated: 2018/09/27 18:19:09 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_pos(int hour)
{
	if (hour >= 12 && hour <= 23)
		return ("P.M.");
	else
		return ("A.M.");
}

void	ft_takes_place(int hour)
{
	if (hour < 0 || hour > 23)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour % 12 == 0)
		printf("%d", 0);
	else
		printf("%d", hour % 12);
	printf(".00 %s", ft_pos(hour));
	hour++;
	if (hour % 12 == 0)
	{
		printf("AND %d", 0);
	}
	else
		printf("AND %d", hour % 12);
	printf(".00 %s", ft_pos(hour));
	return ;
}
