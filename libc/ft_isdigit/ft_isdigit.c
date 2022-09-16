// finished.

#include <stdio.h>

int ft_isdigit(char *nb)
{
    int i = 0;

    while (nb[i])
        if (nb[i] < '0' || nb[i] > '9')
            return (0);
        else
            i++;

    return (1);
}

/*
int main()
{
    int f1 = ft_isdigit("a");
    int f2 = ft_isdigit("A");
    int f3 = ft_isdigit("!");
    int f4 = ft_isdigit("1");
    int f5 = ft_isdigit("");
    int f6 = ft_isdigit("abc");
    int f7 = ft_isdigit("ABC");
    int f8 = ft_isdigit("AbC");
    int f9 = ft_isdigit("12a");
    int f10 = ft_isdigit("a12");
    int f11 = ft_isdigit("123");
    int f12 = ft_isdigit("ab!");
    int f13 = ft_isdigit("!ab");
    int f14 = ft_isdigit("12!");
    int f15 = ft_isdigit("!12");

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
    printf("f11: %d\n", f11);
    printf("f12: %d\n", f12);
    printf("f13: %d\n", f13);
    printf("f14: %d\n", f14);
    printf("f15: %d\n", f15);

    return (0);
}
*/