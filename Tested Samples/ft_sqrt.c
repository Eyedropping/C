#include <stdio.h>

// only if integers involver

int ft_sqrt(int n)
{
  if (n != 0 && n != 1 && n > 0)
  {
    int i = 0;

    while (i * i < n)
    {
      i++;
    }

    if (i * i == n)
    {
      return i;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    printf("Error, returning NULL value \n");
    return 0;
  }
}

int main()
{
  printf("%i\n", ft_sqrt(0));
  printf("%i\n", ft_sqrt(1));
  printf("%i\n", ft_sqrt(-1));
  printf("%i\n", ft_sqrt(1));
  printf("%i\n", ft_sqrt(2));
  printf("%i\n", ft_sqrt(3));
  printf("%i\n", ft_sqrt(4));
  printf("%i\n", ft_sqrt(5));
  printf("%i\n", ft_sqrt(6));
  return 0;
}