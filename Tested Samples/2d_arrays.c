#include <stdio.h>

int main()
{
  int chess[8][8]; // declared and initialized an 2d array

  int i = 1; // declaring a counter to scan on rows
  int j = 1; // declaring a counter to scan on columns

  chess[0][0] = 1; // setting 0;0 element to 1

  for (i = 0; i < 8; i++)
  {
    for (j = 0; j < 8; j++)
    {
      chess[i][j] = i * j; // каждому элементу присваиваем значение произведения текущих индексов элемента массива
    }
  }

  for (i = 0; i < 8; i++)
  {
    for (j = 0; j < 8; j++)
    {
      printf("[%i][%i] = %i, \n", i, j, chess[i][j]); // каждому элементу присваиваем значение произведения текущих индексов элемента массива
    }
  }

  return 0;
}