int test(char *str)
{
    if (atoi(str) == ft_atoi(str))
    {
        printf("\tOK\n");
        return (1);
    } else {
        printf("\tKO\n");
        printf("%s\n", str);
        printf("%d\n", atoi(str));
        printf("~~~VS~~~\n");
        printf("%d\n", ft_atoi(str));
        return (0);
    }
}