#include <stdio.h>
#include <stdbool.h> // for work with boolean values
#define SIZE 4

int main(void)
{
    int prices[SIZE] = {100, 200, 300, 400};

    bool isTrue = true;
    bool isFalse = false;

    printf("%i\n", prices[0]);
    printf("%i\n", prices[1]);
    printf("%i\n", prices[2]);
    printf("%i\n", prices[3]);
    printf("\n");
    printf("True: %i, False: %i\n\n", isTrue, isFalse);

    int i = 0; // задаем переенную-индексатор (итератор, счетчик, каунтер)

    printf("While loop:\n");
    while(i < SIZE)
    {
        printf("%d\n", prices[i]);
        i++;
    }
    printf("\n");

    printf("For loop:\n");
    for(int i = 0; i < SIZE; i++) // C99 std allows to declare and initialize variables in loop condition
    {
        printf("%d\n", prices[i]);
    }
    printf("\n");
    return 0;
}