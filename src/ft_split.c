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


char *ft_strtrim_char(char const *s1, char c)
{
	size_t len = ft_strlen(s1); 
	size_t i = 0;
	size_t j = 0;
	char *trimmed;
	
	while (c == s1[i])
	{
		i++;
	}
	
	while (c == s1[len-1])
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

char **ft_split(char const *s, char c)
{
	char *final;
	final = ft_strtrim_char(s, c);
	printf("%s\n", final);

	int i = 0;
	int count = 1;


	while (final[i] != '\0')
	{
		if (final[i] == c)
		{
			count++; 
		}
		i++;
	}
	printf("Count: %d\n", count);

	char **words;
	words = (char**)malloc(sizeof(char *) * count + 1);
	
	int n = 0; 
	i = 0;
	int j = 0;
	while (n < count)
	{
		while (final[i] != '\0')
		{
			if (final[i] == c)
			{
				i++; 
				break; 
			}
			i++;
		}
		char *word; 
		word = (char *)malloc(sizeof(char) * i + 1); 

		int m = 0;
		while (final[j] != '\0')
		{
			if (final[j] == c)
			{
				j++;
				break;
			}
			word[m] = final[j]; 
			m++; 
			j++; 
		}
		word[m] = '\0'; 
		words[n] = word; 
		n++; 
	}
	words[n] = NULL; 

	return words;
}


int main(void)
{
	char str[] = ",,,Hello,this,is,a,test,,,"; 
	char c = ',';

	char **final; 
	final = ft_split(str, c);

	int i = 0; 
	while (final[i] != NULL)
	{
		printf("%s\n", final[i]);
		i++; 
	}
	return 0; 
}