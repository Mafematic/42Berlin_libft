#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src; 

	size_t i = 0;
    if (d != s && d < s)
    {
        while (i < n)
        {
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return dest; 
}

/*
int main(void)
{
    char str11[] = "hello";
    char str12[] = ".......";
    memmove(str12, str11, 3);

	printf("%s\n", str12); 
}
*/


