/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:13:33 by sbessa            #+#    #+#             */
/*   Updated: 2018/10/09 11:00:31 by sbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int sym_men( int i, int j, int m_i, int m_j, int max)
{
  if (i >= m_i && i < m_i + max && j >= m_j && j < m_j + max)
    return (1);
  return (0);
}

void print_map(char **map, int m_i, int m_j, int max, char fill)
{
  int i;
  int j;

  i = 0;
  while (map[i][0])
    {
		j = 0;
     	while (map[i][j])
		{
	 		 if (sym_men(i, j, m_i, m_j, max) == 1)
			    map[i][j] = fill;
			  write(1, &map[i][j], 1);
			  j++;
	}
      i++;
      write(1, "\n", 1);
    }

}


int main()
{
	int i;
	int j;
  char **map;
  char fill = '+';

  map = (char **)malloc(sizeof(char *) * (5));
  i = 0;
  while (i < 4)
	  map[i++] = (char *)malloc(sizeof(char) * (5 + 1));
  i = 0;
  while (i < 4)
  {
	  j = 0;
	  while (j < 5)
	  {
	  map[i][j] = '.';
	  write(1, &map[i][j], 1);
	  j++;
	  }
	  map[i][j] = '\0';
	  write(1, "\n", 1);
	  i++;
  }
  map[i][0] = '\0';
  write(1, "\n", 1);
  print_map(map, 1, 1, 2, fill); 
  return (0);
}
