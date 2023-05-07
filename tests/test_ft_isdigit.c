#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_isdigit(void)
{
    // Test if is_digit returns true for digit characters
    TEST_ASSERT_TRUE_MESSAGE(ft_isdigit('0'), "ft_isdigit should return true for '0'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isdigit('5'), "ft_isdigit should return true for '5'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isdigit('9'), "ft_isdigit should return true for '9'");

    // Test if is_digit returns false for non-digit characters
    TEST_ASSERT_FALSE_MESSAGE(ft_isdigit('a'), "ft_isdigit should return false for 'a'");
    TEST_ASSERT_FALSE_MESSAGE(ft_isdigit(' '), "ft_isdigit should return false for ' '");
    TEST_ASSERT_FALSE_MESSAGE(ft_isdigit('$'), "ft_isdigit should return false for '$'");
}