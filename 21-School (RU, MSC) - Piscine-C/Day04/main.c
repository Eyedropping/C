#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  int result = 1;
  int i;

  while(i = 0, nb > 7)
  {
    result = result * nb;
    nb--;
  }
return 0; 
}

int main() {
  
  printf("%d", ft_iterative_factorial(9));
  
}
