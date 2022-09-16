// finished.

#include <stdio.h>

int ft_isascii(unsigned int ascii)
{
    if (ascii < -127 || ascii > 127)
        return (0);
    else
        return (1);
}

/*
int main()
{
    int f1 = ft_isascii(0);
    int f2 = ft_isascii(1);
    int f3 = ft_isascii(200);
    int f4 = ft_isascii('a');

    printf("f1: %d\n", f1);
    printf("f2: %d\n", f2);
    printf("f3: %d\n", f3);
    printf("f4: %d\n", f4);
    return (0);
}
*/