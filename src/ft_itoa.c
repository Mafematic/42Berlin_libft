#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n) 
{
    int count = 0;
	long num = n;
	long temp;
	int is_negative = 0;
	char *arr;

	if (num == 0)
	{
		arr = (char*)malloc(sizeof(char)*2);
		arr[0] = '0';
		arr[1] = '\0';
		return arr; 
	}
	if (num < 0)
	{
		is_negative = -1;
		num *= -1;
		count++;
	}
	temp = num;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
	arr = malloc((count + 1) * sizeof(char));

	if (is_negative)
	{
		arr[0] = '-';
	}

    int i = count - 1;
    while (num != 0)
    {
        arr[i] = num % 10 + '0'; 
        num /= 10;
		i--;
    }
	arr[count] = '\0';
    return arr;
}

/*
int main(void)
{
    int n = -2147483648; 
    char *str; 
    str = ft_itoa(n); 

    printf("%s\n", str); 
    return 0; 
}
*/