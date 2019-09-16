#include <stdio.h>

int ft_iterative_power(int x, int n);

int main()
{
	printf("%d \n", ft_iterative_power(2, -1));
	printf("%d \n", ft_iterative_power(2, 4));
	printf("%d \n", ft_iterative_power(3, 3));
	printf("%d \n", ft_iterative_power(4, 7));
	printf("%d \n", ft_iterative_power(5, 8));
	printf("%d \n", ft_iterative_power(6, 2));
	printf("%d \n", ft_iterative_power(7, 4));
	return 0;
}