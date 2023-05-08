#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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


char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len_s1 = ft_strlen(s1);
	size_t len_s2 = ft_strlen(s2);
	size_t len = len_s1 + len_s2;

	char *joined; 
	joined = (char *)malloc(sizeof(char) * (len) + 1);
	if (!joined)
	{
		return NULL;
	}
	size_t i = 0; 
	while (i < len_s1)
	{
		joined[i] = s1[i];
		i++;
	}
	size_t j = 0;
	while (j < len_s2)
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return joined;
}

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	char *final;
	final = ft_strjoin(str1, str2);
	printf("%s\n", final);
	free(final);
	return 0;
}