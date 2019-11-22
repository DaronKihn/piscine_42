/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:59:51 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/10 18:20:09 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		kol_str(int fd, char *symb);

int		kol_symb(int fd);

void	make_map(int fd, int k_str, int m, char *symb);

void	read_map(char *filename);

void	read_std_map(void);

void	print_map(char *map, int *mas_max, int m, char fill);

void	find_map(char *map, int m, char empty, char fill);

int		error_map(char *c, char *symb, int m, int k_str);
#endif
