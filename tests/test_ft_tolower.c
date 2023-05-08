#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_tolower(void)
{
    TEST_ASSERT_EQUAL_INT('a', ft_tolower('A'));
    TEST_ASSERT_EQUAL_INT('z', ft_tolower('z'));
    TEST_ASSERT_EQUAL_INT('1', ft_tolower('1'));
    TEST_ASSERT_EQUAL_INT(233, ft_tolower(233));
}