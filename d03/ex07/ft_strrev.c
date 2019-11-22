/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 22:19:16 by dkihn             #+#    #+#             */
/*   Updated: 2018/09/21 23:03:13 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	buf;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	while (i < size - 1)
	{
		buf = str[i];
		str[i] = str[size - 1];
		str[size - 1] = buf;
		size--;
		i++;
	}
	return (str);
}
