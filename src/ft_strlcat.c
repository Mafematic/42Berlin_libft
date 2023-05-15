#include <stdio.h>
#include "libft.h"
/*#include <bsd/string.h>*/


size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dest_len)
	{
		return (size + src_len);
	}
	i = 0;
	while (dest_len + 1 + i < size && src[i])
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
int main(void)
{
	char src[] = "hello";
	char dest[] = "world";
	int size = 10;
	int n = 0;
	n = strlcat(dest, src, size);
	printf("%d\n", n);
	printf("%s\n", dest);
 	return 0;
}	
*/
