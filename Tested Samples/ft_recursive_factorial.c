#include <stdio.h>

int ft_recursive_factorial(int x)
{
  // n! = n * (n - 1)

  if (x == 1)
  {
    return 1;
  }
  else
  {
    return x * ft_recursive_factorial(x - 1);
  }
}

int main()
{
  printf("%d\n", ft_recursive_factorial(5));
}