#include <stdio.h>

void findV(int *arr)
{
    int min = 999;
    int max = 0;
    int i = arr[0] - 1;

    while (i != '\0')
    {
        if (arr[i] > max)
        { // dealing with max
            max = arr[i];
        }
        if (arr[i] < min)
        { // dealing with min
            min = arr[i];
        }
        i++;
    }

    printf("The min is %i", min);
    printf("The max is %i", max);
}

int main()
{

    int array[] = {1, 2, 4, 5, 6};
    findV(array);
    return 0;
}