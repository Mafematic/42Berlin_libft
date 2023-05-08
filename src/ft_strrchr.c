#include <stdio.h>

/*
int ft_strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/

char *ft_strrchr(const char *s, int c)
{
    int i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == c)
        {
            return (char *)&s[i];
        }
        i--;
    }
    return NULL;
}

/*
int main(void)
{
    char str[] = "Hello";
    int a = 'H';
    char *sol; 
    sol = ft_strrchr(str, a);
    printf("%s\n", sol);
}
*/