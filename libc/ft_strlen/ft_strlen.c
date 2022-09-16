// finished.

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

/*
int main()
{
    int f1 = ft_strlen("abcde");
    int f2 = ft_strlen("abcde fghi");
    int f3 = ft_strlen("");

    printf("f1: %d\n", f1);
    printf("f2: %d\n", f2);
    printf("f3: %d\n", f3);
    
    return (0);
}
*/