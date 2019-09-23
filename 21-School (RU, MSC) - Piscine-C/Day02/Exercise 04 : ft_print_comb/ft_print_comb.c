#include <stdio.h>

void ft_putchar(char a);

void ft_print_comb(void)
{
    char arr[] = {'0', '0', '0'};

    int i = 0;
    while (arr[i] != sizeof(arr))
    {
        printf("%c", arr[i]);
        i++;
    }

    printf("\n");

    // while (fd <= 9)
    // {
    //     while (sd <= 9)
    //     {

    //         while (td <= 9)
    //         {
    //             ft_putchar(td);
    //             td++;
    //         }
    //         ft_putchar(sd);
    //         sd++;
    //     }
    //     ft_putchar(fd);
    //     fd++;
    // }
}