#include <stdio.h>

void ft_putchar(char a);

void ft_print_reverse_alphabet(void)
{
  char letter = 'z';
  while (letter != 'a')
  {
    putchar(letter);
    letter--;
  }
}