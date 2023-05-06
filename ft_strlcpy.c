#include <stdio.h>

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {   
        i++;
    }
    return (i);
}


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;
	src_len = ft_strlen(src);

    if (size == 0)
	{
        return src_len;
    }

	size_t i = 0;
	while (i < size - 1 && i < src_len)
	{
		dst[i] = src[i];
		printf("%c\n", dst[i]);
		i++;
	}
	dst[i] = '\0'; 
	return src_len;
}

int main(void)
{
	char dest[10];
	char src[] = "hello";
	int size = 6;
    int n = 0;
    n = ft_strlcpy(dest, src, size);
    printf("%d\n", n);
    printf("%s\n", dest);
    return 0;
}
