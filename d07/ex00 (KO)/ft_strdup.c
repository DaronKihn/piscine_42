/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 13:12:44 by dkihn             #+#    #+#             */
/*   Updated: 2018/09/27 14:57:49 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		index;

	p = NULL;
	index = 0;
	p = (char*)malloc(ft_strlen(src) * sizeof(char));
	while (index < ft_strlen(src))
	{
		p[index] = src[index];
		index++;
	}
	return (p);
	free(p);
}
