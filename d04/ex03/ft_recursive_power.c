/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 18:28:25 by dkihn             #+#    #+#             */
/*   Updated: 2018/09/22 18:39:31 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb);
}
