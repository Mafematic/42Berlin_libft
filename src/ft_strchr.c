#include <stdio.h>

char *ft_strchr(const char *s, int c) 
{
	int i = 0; 
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (char *)&s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return (char *)&s[i];
	}
	return NULL; 
}

/*
int main(void)
{
	char str[] = "Hello World";
	int a = '\0'; 
	char *sol; 
	sol = ft_strchr(str, a); 
	printf("%s\n", sol); 
}
*/

