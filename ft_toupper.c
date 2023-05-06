#include <stdio.h>

int ft_toupper(int c) 
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return c; 
}

int main(void)
{
	int a;
	a = ft_toupper('.');
	printf("%c\n", a);
}

