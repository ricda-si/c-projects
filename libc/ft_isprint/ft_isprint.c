// finished.

#include <stdio.h>

int ft_isprint(unsigned int isprint)
{
    if (isprint < 32 || isprint > 127)
        return (0);
    else
        return (1);
}

/*
int main()
{
    int f1 = ft_isprint(0);
    int f2 = ft_isprint(1);
    int f3 = ft_isprint(127);
    int f4 = ft_isprint(200);
    int f5 = ft_isprint(-35);
    int f6 = ft_isprint('a');
    int f7 = ft_isprint('!');
    int f8 = ft_isprint('*');
    int f9 = ft_isprint(91);
    int f10 = ft_isprint(32);

    printf("f1: %d\n", f1);
    printf("f2: %d\n", f2);
    printf("f3: %d\n", f3);
    printf("f4: %d\n", f4);
    printf("f5: %d\n", f5);
    printf("f6: %d\n", f6);
    printf("f7: %d\n", f7);
    printf("f8: %d\n", f8);
    printf("f9: %d\n", f9);
    printf("f10: %d\n", f10);

    return (0);
}
*/