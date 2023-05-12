#include <unistd.h>
#include <stdio.h>

int ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
		|| (c >= '0' && c <= '9'))
	{
		return (1); 
	}
	return (0); 
}

/*
int main(void)
{
	int n = 0;
	n = ft_isalnum('#');
	printf("%d\n", n);
}
*/
