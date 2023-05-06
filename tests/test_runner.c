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
	
	RUN_TEST(test_ft_isprint);


	return UNITY_END(); 
}

