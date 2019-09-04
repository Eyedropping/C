#include <unistd.h>

char ft_putchar(char c);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('a');
        ft_putchar('\n');
    }

    else
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a')
            {
                ft_putchar(argv[1][i]);
                break;
            }

            argv[1][i]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}