#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_len = ft_strlen(little);
    size_t big_len = ft_strlen(big);
    size_t i = 0;

    if (!*little)
        return (char *)big;

    while (i < big_len && i + little_len <= len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
		{
			return (char *)(big + i);
		}
		i++;
	}
    return NULL;
}

/*
int main(void)
{
	char str1[] = "This is a sentence";
	char str2[] = "sent";

	char *final;
	final = ft_strnstr(str1, str2, 16);
	printf("%s\n", final);
}
*/