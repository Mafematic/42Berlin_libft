void *ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char dest = destination;
	const unsigned char src = source; 
	
	if (src < dest && src + n > dest) 
	{
		size_t i = num - 1; 
		while (i >= 0) 
		{
			dest[i] = src[i];		
		}
	}
	else if (src > dest) 
	{
		size_t i = 0
	}
}
