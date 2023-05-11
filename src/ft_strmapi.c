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

char change_character_at_index(unsigned int index, char c)
{
    if (index % 2 == 0)
    {
        return 'r'; 
    }
    return c; 
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0; 
    size_t len = ft_strlen(s); 
    char *word;
    word = (char*)malloc(sizeof(char) * len + 1); 
    if (!word)
    {
        free (word);
        return NULL;
    }

    while (s[i] != '\0') 
    {
        word[i] = f(i, s[i]);
        i++; 
    }
    word[i] = '\0'; 
    return word; 
}

int main(void)
{
    char str[] = "Hello"; 
    char *final; 
    final = ft_strmapi(str, change_character_at_index); 

    printf("%s\n", final); 

    return 0; 
}