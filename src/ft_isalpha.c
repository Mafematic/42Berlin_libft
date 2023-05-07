#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); 
	}
	return (0); 
}

/*
int main(void) 
{
	int num = -1; 
	num = ft_isalpha('9'); 

	printf("%d\n", num);
	return 0; 

}
*/ 