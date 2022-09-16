#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i = 0;
    int j = 1;
    int k = 0;

    while (str[i] <= 32)
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        j = -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        k = (k * 10) + str[i] - '0';
        i++;
    }
    return (k * j);
}

/*
int main()
{
    char a[] = "   +1234 3abc123";

    printf("My atoi: %d", ft_atoi(a));
    printf("\n");
    printf("Original atoi: %d", atoi(a));
}
*/