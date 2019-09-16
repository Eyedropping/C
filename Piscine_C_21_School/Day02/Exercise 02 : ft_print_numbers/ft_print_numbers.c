#include <stdio.h>
#include <unistd.h>

int ft_putchar(int a);

void ft_print_numbers(void)
{
  int number = 0;
  char comma = ", "; /* watchingcarsgoby@watchingcarsgobys-iMac Exercise 02 : ft_print_numbers % gcc ft_print_numbers.c main.c ft_putchar.c -Wall -Werror -Wextra 
                      ft_print_numbers.c:9:8: error: incompatible pointer to integer conversion initializing 'char' with an expression of type 'char [3]' [-Werror,-Wint-conversion] */
  while (number < 9)
  {
    ft_putchar(number);
    write(1, &comma, 2);
    number++;
  }
}