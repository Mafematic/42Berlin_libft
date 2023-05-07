#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_isascii(void)
{
    // Test if all valid ASCII characters return true
    for (int i = 0; i <= 127; i++)
    {
        TEST_ASSERT_TRUE_MESSAGE(ft_isascii(i), "ft_isascii should return true for all valid ASCII characters");
    }

    // Test if characters outside the ASCII range return false
    for (int i = 128; i <= 255; i++)
    {
        TEST_ASSERT_FALSE_MESSAGE(ft_isascii(i), "ft_isascii should return false for characters outside the ASCII range");
    }

    // Test some specific characters
    TEST_ASSERT_TRUE_MESSAGE(ft_isascii('A'), "ft_isascii should return true for 'A'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isascii('\n'), "ft_isascii should return true for '\\n'");
    TEST_ASSERT_FALSE_MESSAGE(ft_isascii(-1), "ft_isascii should return false for -1");
    TEST_ASSERT_FALSE_MESSAGE(ft_isascii(256), "ft_isascii should return false for 256");
}