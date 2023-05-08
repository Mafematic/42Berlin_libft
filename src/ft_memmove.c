#include <unistd.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src; 

	size_t i = 0;
    if (d == s || d + n <= s || s + n <= d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
	return dest; 
}

/*
int main(void)
{
	char str[] = "Hello World"; 
	ft_memmove(str, str, 4); 

	printf("%s\n", str); 
}
*/ 