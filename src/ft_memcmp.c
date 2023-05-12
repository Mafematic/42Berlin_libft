#include <unistd.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) 
{
	const unsigned char *p1 = s1; 
	const unsigned char *p2 = s2;
	size_t i = 0;
	while (i < n) 
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	int n = 0;
	n = ft_memcmp(str1, str2, 3);
	printf("%d\n", n); 
}
*/