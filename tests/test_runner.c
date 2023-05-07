#define UNITY_COLOR_ENABLE
#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void setUp(void)
{

}

void tearDown(void)
{

}

int main(void)
{
	UNITY_BEGIN();
	
	RUN_TEST(test_ft_atoi);
	RUN_TEST(test_ft_bzero);
	RUN_TEST(test_ft_isalnum); 
	RUN_TEST(test_ft_isalpha);
	RUN_TEST(test_ft_isascii);
	RUN_TEST(test_ft_isdigit); 
	RUN_TEST(test_ft_isprint);
	RUN_TEST(test_ft_memchr); 
	RUN_TEST(test_ft_memcpy); 
	RUN_TEST(test_ft_memset); 
	RUN_TEST(test_ft_strchr); 
	RUN_TEST(test_ft_strlcat);
	RUN_TEST(test_ft_strlcpy);
	RUN_TEST(test_ft_strlen); 
	
	return UNITY_END(); 
}

