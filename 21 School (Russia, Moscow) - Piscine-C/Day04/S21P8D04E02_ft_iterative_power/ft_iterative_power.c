int ft_iterative_power(int x, int n)
{
    int res = 1;
    int i = 0;

    while(i < n)
    {
        res = res * x;
        i++;
    }

	return res;
}