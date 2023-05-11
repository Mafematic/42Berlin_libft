#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1); 
        i++;
    }
}

int main()
{
    ft_putstr_fd("Hello", 1); 
}