#!/bin/sh

gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
ranlib libft.a
rm *.o
gcc main.c -L. libft.a
