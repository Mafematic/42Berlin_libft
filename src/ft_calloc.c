#include <stdlib.h>

/*
void *ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *p = ptr;
	size_t i = 0;
	while (i < num)
	{
		p[i] = (unsigned char) value;
		i++;
	}
	return (ptr);
}*/

void *ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0)
	{
		return NULL; 
	}

	void *ptr = malloc(size * nmemb);
    if (ptr == NULL)
    {
        return NULL;
    }
	ft_memset(ptr, 0, size * nmemb); 

	return (ptr); 
}
