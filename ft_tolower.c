#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return c;
}

int main(void)
{
    int a;
    a = ft_tolower('A');
    printf("%c\n", a);
}

