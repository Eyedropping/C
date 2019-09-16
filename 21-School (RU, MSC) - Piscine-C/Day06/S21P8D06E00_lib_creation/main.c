#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char str[] = "C";
  	char str1[] = "CC";
  	int a = 1;
  	int b = 2;
  
  ft_putchar('c');
  printf("\n");
  ft_swap(&a, &b);
  printf("a = %d, b = %d \n", a, b);
  ft_putstr(str1);
  printf("\n");
  printf("Here's you str's len: %d", ft_strlen(str));
  printf("\n");
  printf("Here's your string comparison: %d",ft_strcmp(str, str1));
  return 0;
}
