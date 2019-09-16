#include <stdio.h>

char ft_putchar(char a);

void ft_print_alphabet(void)
{
  char letter = 'a';
  while (letter <= 'z')
  {
    ft_putchar(letter);
    letter++;
  }
}