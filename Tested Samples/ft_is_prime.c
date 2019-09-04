#include <stdio.h>

int ft_is_prime(int n)
{
    if (n == 0)
    {
        printf("The number %d is 0\n", n);
    }
    else if (n == 1)
    {
        printf("The number %d is either\n", n);
    }
    else if (n == 2)
    {
        printf("The number %d is prime\n", n);
    }

    else
    {
        int i = n - 1;

        while (i > 1)
        {
            if (n % i == 0)
            {
                printf("The number %d is composite\n", n);
                break;
            }
            else
            {
                i--;
            }

            if (i == 1)
            {
                printf("The number %d is prime\n", n);
            }
        }
    }
    return n;
}

int main()
{
    ft_is_prime(0);
    ft_is_prime(1);
    ft_is_prime(2);
    ft_is_prime(3);
    ft_is_prime(4);
    ft_is_prime(5);
    ft_is_prime(6);
    ft_is_prime(7);
    return 0;
}