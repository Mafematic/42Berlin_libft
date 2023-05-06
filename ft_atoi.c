#include <unistd.h>
#include <stdio.h> 

int ft_atoi(const char *nptr)
{
	int i = 0;
	int is_negative = 0; 
	long num = 0;
	while (nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '+')
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num *= 10; 
		num += nptr[i] - '0';
	i++;
	}
	printf("%ld\n", num);
	return 0;
}

int main(void)
{
	ft_atoi("  420");
	return 0;
}
