#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

char *ft_strdup(const char *s)
{
	size_t len = ft_strlen(s);
	char *cpy; 
	cpy = (char *)malloc(sizeof(char) *len + 1);

	int i = 0;
	while (i < len)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return cpy;
}

int main(void)
{
	char str[] = "Hello";
	char *final;
	final = ft_strdup(str);
	printf("%s\n", final);
}