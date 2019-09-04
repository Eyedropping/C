#include <string.h>
#include <stdio.h>
#define VariableName(name)  #name // таким образом мы сможем отображать имя именно той переменной над котой велась операция в каждом следующем printf.

int ft_strlen(char *x)
{
  int i = 0;
  
  while(x[i] != '\0')
  {
   i++; 
  }
  
  printf("The sting '%s' has %i symbols.\n", VariableName(x), i);
  return i;
}

int main() 
{

  char x0[] = "huy";
  char x1[] = "pizda";
  char x2[] = "ty suka";
  char x3[] = "4e ohuel chto li";
  char x4[] = "schas pizdi dam";
  char x5[] = "soosee mraz'";
  char x6[] = "blya, mat' tvoju ebal";
  char x7[] = "ty 4e 4ert";
  char x8[] = "podumaj dvazhdy";
  
  ft_strlen(x0);
  ft_strlen(x1);
  ft_strlen(x2);
  ft_strlen(x3);
  ft_strlen(x4);
  ft_strlen(x5);
  ft_strlen(x6);
  ft_strlen(x7);
  ft_strlen(x8);

  return 0;
}