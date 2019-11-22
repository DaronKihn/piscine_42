/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 15:49:26 by dkihn             #+#    #+#             */
/*   Updated: 2018/09/25 19:37:39 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cout(char *str, int index, int res)
{
	if (str[index] >= '0' && str[index] <= '9')
	{
		res = (str[index] - '0');
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		res = res * 10 + (str[index] - '0');
		index++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int index;
	int i;
	int res;

	index = 0;
	i = 1;
	res = 1;
	if (str[0] == '-')
	{
		i = -1;
		index++;
	}
	if (str[index] > '9' || str[index] < '0')
		return (0);
	else
		return (ft_cout(str, index, res) * i);
}
