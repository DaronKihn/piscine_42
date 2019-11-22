/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:56:55 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 19:38:36 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int k;

	k = 1;
	if (argc > 1)
	  {
		if (open(argv[1], O_RDONLY) < 0)
	       		    read_std_map(argv);
	  }
	while (k < argc)
	{
		read_map(argv[k]);
		k++;
		if (k < argc)
			write(1, "\n", 1);
	}
	return (0);
}
