
#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

int             kol_std_str(char *str, char *symb)
{
  int i;
  int             k_str;

  k_str = 0;
  i = 0;
  while (str[i] >= '0' && str[i] <= '9')
      k_str = k_str * 10 + (str[i++] - '0');
  symb[0] = str[i++];
  symb[1] = str[i++];
  symb[2] = str[i++];
  return (k_str);
}

void    make_std_map(char **argv, int k_str, int m, char *symb)
{
  int             i;
  char    *map;

  map = (char *)malloc(sizeof(char) * (k_str * m + 1));
  i = 0;
  while (*argv[i] && i <= k_str * m)
    {
      map[i] = *argv[i];
      i++;
    }
  map[i] = '\0';
  if (error_map(map, symb, m, k_str) == 0)
    find_map(map, m, symb[0], symb[2]);
  else
    write(1, "map error\n", 10);
}

int             kol_std_symb(char *str)
{
  int i;
  int             m;

  m = 1;
  i = 0;
  while (str[i++])
      m++;
  return (m);
}


void read_std_map(char **argv)
{
  int             m;
  int             k_str;
  char    symb[3];

  k_str = kol_std_str(argv[1], symb);
  m = kol_std_symb(argv[2]);
  make_std_map(argv, k_str, m, symb);
}
