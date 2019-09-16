#include <stdio.h>
#include <unistd.h>

int ft_putchar(int a) {
    write(1, &a, 1);
}