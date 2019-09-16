int ft_fibonacci(int n)
{
  if(n == 0 || n == 1)
    {
      return 1;
    } 
    else
    {
      return ft_fibonacci(n - 1) + ft_fibonacci(n - 2);
    }
}