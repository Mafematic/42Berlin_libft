#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n) 
{
    int count = 0;
    int cpy = n; 
    while (n >= 1)
    {
        count++;
        n /= 10;
    }
    count--;
    char *arr; 
    arr = (char*)malloc(sizeof(char)*count + 1);

    int remainder;
    int i = 0; 
    while (count >= 0)
    {
        arr[count] = cpy % 10 + '0';
        count--; 
        cpy /= 10;
    }
    printf("%s\n", arr);
    return arr;
}


int main(void)
{
    int n = 420; 
    char *str; 
    str = ft_itoa(n); 

    printf("%s\n", str); 
    return 0; 
}