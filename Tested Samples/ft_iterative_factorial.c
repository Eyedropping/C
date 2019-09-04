#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;
    int i = nb;
    // 5! = 5 * 4 * 3 * 2 * 1

    while(i != 0)
    {
        result = result * i;
        i--;
    }
    return result;
}

    int main()
    {
        printf("%d", ft_iterative_factorial(5));
    }
    