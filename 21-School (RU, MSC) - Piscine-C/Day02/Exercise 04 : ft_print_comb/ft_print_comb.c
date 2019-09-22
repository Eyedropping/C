#include <stdio.h>

void ft_putchar(char a);

void ft_print_comb(void)
{
    int fd = 0;
    int sd = 0;
    int td = 0;

    while (fd <= 9)
    {
        while (sd <= 9)
        {

            while (td <= 9)
            {
                td++;
            }

            sd++;
        }

        fd++;
    }
}