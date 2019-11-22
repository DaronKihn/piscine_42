/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:59:51 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 19:14:50 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	read_std_map(char **argv);

void	read_map(char *filename);

void	print_map(char *map, int *mas_max, int m, char fill);

void	find_map(char *map, int m, char empty, char fill);

int		error_map(char *c, char *symb, int m, int k_str);
#endif
