#include <unistd.h>
#include <stdio.h>

void change_character(unsigned int index, char *s)
{
    
    if (index % 2 == 0 && *s >= 'a' && *s <= 'z')
    {
        *s -= 32;
    }
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

/*
int main(void)
{
    char str[] = "Hello"; 
    ft_striteri(str, change_character); 

    printf("%s\n", str); 
    return 0; 
}
*/