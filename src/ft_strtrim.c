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

int is_set(char const *set, char c)
{
	int i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t len = ft_strlen(s1); 
	size_t i = 0;
	size_t j = 0;
	char *trimmed;
	
	while (is_set(set, s1[i]))
	{
		i++;
	}
	
	while (is_set(set, s1[len-1]))
	{
		len--;
	}

	trimmed = (char *)malloc(sizeof(char)*(len-i) + 1);
	if (!trimmed)
	{
		return NULL;
	}

	while (i < len)
	{
		trimmed[j] = s1[i];
		j++;
		i++; 
	}
	trimmed[j] = '\0';
	return trimmed;
}

int main(void)
{
	char str[] = "iiiHelloiii";
	char set[] = " ,i";	
	char *final;
	final = ft_strtrim(str, set);
	printf("%s\n", final); 
	return 0;
}