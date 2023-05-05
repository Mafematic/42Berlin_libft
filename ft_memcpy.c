void *ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char *dest = destination; 
	const unsigned char *src = source; 
	size_t i = 0;
	
	while (i < num) 
	{
		dest[i] = src[i];
		i++;
	}
	return destination;
}

