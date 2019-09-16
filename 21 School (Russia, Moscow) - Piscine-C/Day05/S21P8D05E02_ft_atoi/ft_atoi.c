#include <stdlib.h>

void ft_atoi(char *str)
{
  int res = 0;
  int i = 0;

  while (i != '\0')
  {
    res = str[i] - '0' + res * 10;
    i++;
  }
}