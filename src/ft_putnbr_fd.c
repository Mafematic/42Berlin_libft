#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd) 
{
    long num = n;

    if (num < 0)
    {
        write(fd, "-", 1);
        num = -num; 
    }
    if (num >= 1)
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putchar_fd(num % 10 + '0', fd);
    }
}

int main(void)
{
    ft_putnbr_fd(-2147483648, 1);
    return 0; 
}