#include <stdio.h>

int main()
{
    for(int i = 1; i < 5; i++)
    {
        printf("\n\n1st loop iteration: %i \n", i);

        for(int j = 1; j < 5; j++)
        {
            printf("   - 2nd loop iteration %i \n", j);
        }
    }

    return 0;
}