#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char * str);
int test(char *str);

int main(void)
{
    char *str;
    int res = 0;

    printf("1. ");
    res += test("214d");
    printf("2. ");
    res += test(" -214d");
    printf("3. ");
    res += test(" +214d");
    printf("4. ");
    res += test("\t\n\v\f\r -214d");
    printf("5. ");
    res += test("V-214d");
    printf("6. ");
    res += test("-21V4d");
    printf("7. ");
    res += test(" v -214d");
    printf("8. ");
    res += test("-21 4d");
    printf("9. ");
    res += test("- +214d");
    printf("10. ");
    res += test("+-214d");
    printf("11. ");
    res += test("- 21 4d");
    printf("12. ");
    res += test("-d");
    printf("13. ");
    res += test("+d");
    printf("14. ");
    res += test("-2147483648");
    printf("15. ");
    res += test("2147483647");

    printf("\nResult: %d", res);
    printf(" of 15\n");

    if (res == 15)
        printf("Success!\n");
    else
        printf("Fail!\n");

    return (0);
}