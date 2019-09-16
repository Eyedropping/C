#include <stdio.h>
#include <unistd.h>

char ft_putchar(char a)
{
    write(1, &a, 1);
}