// finished.

#include <stdio.h>

int ft_isalpha(char *str1)
{
    int i = 0;

    if (str1[i] == '\0')
        return (1);
    while (str1[i])
        if ((str1[i] < 'a' || str1[i] > 'z') && (str1[i] < 'A' || str1[i] > 'Z'))
            return (0);
        else
            i++;
    return (1);
}

/*
int main()
{
    char f1 = ft_isalpha("a");
    char f2 = ft_isalpha("A");
    char f3 = ft_isalpha("!");
    char f4 = ft_isalpha("1");
    char f5 = ft_isalpha("");
    char f6 = ft_isalpha("abc");
    char f7 = ft_isalpha("ABC");
    char f8 = ft_isalpha("AbC");
    char f9 = ft_isalpha("12a");
    char f10 = ft_isalpha("a12");
    char f11 = ft_isalpha("123");
    char f12 = ft_isalpha("ab!");
    char f13 = ft_isalpha("!ab");
    char f14 = ft_isalpha("12!");
    char f15 = ft_isalpha("!12");

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