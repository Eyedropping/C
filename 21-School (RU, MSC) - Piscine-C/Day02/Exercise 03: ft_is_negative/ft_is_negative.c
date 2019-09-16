#include <stdio.h>

void ft_putchar(char a);

void ft_is_negative(int n)
{
    char pos = 'P';
    char neg = 'N';

    if (n > 0 || n == 0)
    {
        ft_putchar(pos);
    }
    else
    {
        ft_putchar(neg);
    }
}