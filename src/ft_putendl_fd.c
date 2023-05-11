#include <unistd.h>

void ft_putendl_fd(char *s, int fd) 
{
    int i = 0; 
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1); 
        i++; 
    }
    write(1, "\n", 1); 
}

int main()
{
    ft_putendl_fd("Hello", 1);
}