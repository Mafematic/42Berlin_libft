#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_atoi(void)
{
    // Basic valid input
    TEST_ASSERT_EQUAL_INT(123, ft_atoi("123"));

    // Input with leading and trailing spaces
    TEST_ASSERT_EQUAL_INT(123, ft_atoi("   123  "));

    // Input with leading plus sign
    TEST_ASSERT_EQUAL_INT(123, ft_atoi("+123"));

    // Input with leading minus sign
    TEST_ASSERT_EQUAL_INT(-123, ft_atoi("-123"));

    // Input with invalid character in the middle
    TEST_ASSERT_EQUAL_INT(12, ft_atoi("12+3"));

    // Input with invalid character at the beginning
    TEST_ASSERT_EQUAL_INT(0, ft_atoi("abc123"));

    // Input with invalid character at the end
    TEST_ASSERT_EQUAL_INT(123, ft_atoi("123abc"));

    // Input with integer overflow
    TEST_ASSERT_EQUAL_INT(INT_MAX, ft_atoi("2147483647"));

    // Input with integer underflow
    TEST_ASSERT_EQUAL_INT(INT_MIN, ft_atoi("-2147483648"));

    // Empty input string
    TEST_ASSERT_EQUAL_INT(0, ft_atoi(""));
}
