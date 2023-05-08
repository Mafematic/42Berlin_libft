#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_toupper(void)
{
    TEST_ASSERT_EQUAL_INT('A', ft_toupper('a'));
    TEST_ASSERT_EQUAL_INT('Z', ft_toupper('Z'));
    TEST_ASSERT_EQUAL_INT('1', ft_toupper('1'));
    TEST_ASSERT_EQUAL_INT(233, ft_toupper(233));
}