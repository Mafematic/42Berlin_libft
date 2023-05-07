#include <unistd.h>
#include <stdio.h>

void ft_bzero(void *ptr, size_t num) 
{
	unsigned char *p = ptr;
	size_t i = 0;
	while (i < num) 
	{
		p[i] = 0;
		i++;
	}

}

/*
int main(void)
{
	char str[] = "test";
	ft_bzero(str, 2);

	int i = 0; 
	while (i < 4)
	{
		printf("%02X ", str[i]);
		i++;
	}
	printf("\n");
	return 0;
}
*/