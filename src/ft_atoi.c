#include <unistd.h>
#include <stdio.h> 

int ft_iswhitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
	{
		return 1; 
	}
	return 0; 
}

int ft_atoi(const char *nptr)
{
	int i = 0;
	int is_negative = 1; 
	long num = 0;
	while (ft_iswhitespace(nptr[i]))
	{
		i++;
	}
	if (nptr[i] == '+')
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		is_negative *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num *= 10; 
		num += nptr[i] - '0';
	i++;
	}
	return num * is_negative;
}

/*
int main(void)
{
	long num = 0;
	num = ft_atoi("-123");
	printf("%ld\n", num);
	return 0;
}
*/

