/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 17:07:42 by dkihn             #+#    #+#             */
/*   Updated: 2018/09/22 18:26:20 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	if (power > 1)
	{
		i = 1;
		while (power != 0)
		{
			i = i * nb;
			power--;
		}
		return (i);
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (1);
}
