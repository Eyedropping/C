#include <stdio.h>
#include <unistd.h>

int ft_putchar(char a);

void ft_print_numbers(void)
{
  int number = '0';

  while (number <= '9')
  {
    ft_putchar(number++);
  }
}