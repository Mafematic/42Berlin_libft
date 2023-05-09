#include <unistd.h>

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

char **ft_split(char const *s, char c)
{
	ft_strtrim(s, c); 
	int i = 0;
	int count = 1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			count++; 
		}
	}

	char **words;
	words = (char**)malloc(sizeof(char *) * count + 1);

	int n = 0; 
	while (n < words)
	{
		char *word; 
		word = (char *)malloc(sizeof(char)*i +1);

		int j = 0;
		int m = 0;
		while(str[j] != c)
		{
			word[m] = str[j];
			m++;
			j++;
		}
	}

	char *word; 
	word = (char *)malloc(sizeof(char)*i +1);

	int j = 0;
	int m = 0;
	while(str[j] != c)
	{
		word[m] = str[j];
		m++;
		j++;
	}

}


int main(void)
{
	char str[] = ",,,Hello,this,is,a,test,,,"; 
	char c = ',';



}