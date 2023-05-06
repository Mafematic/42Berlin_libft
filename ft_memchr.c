#include <unistd.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p = s;
	int i = 0; 
	while (i < n)
	{
		if (p[i] == c)
		{
			return (void*)(p + i);
		}
		i++;
	}
	return NULL; 
}

int main(void)
{
	char str[] = "Hello";
	int a = 'e'; 
	char *sol;
	int n = 4; 
	sol = ft_memchr(str, a, n); 
	printf("%s\n", sol); 
}


