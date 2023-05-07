#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_isalnum(void)
{
    // Test if is_alnum returns true for alpha-numeric characters
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('a'), "ft_isalnum should return true for 'a'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('5'), "ft_isalnum should return true for '5'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('Z'), "ft_isalnum should return true for 'Z'");

    // Test if is_alnum returns false for non-alpha-numeric characters
    TEST_ASSERT_FALSE_MESSAGE(ft_isalnum('#'), "ft_isalnum should return false for '#' ");
    TEST_ASSERT_FALSE_MESSAGE(ft_isalnum(' '), "ft_isalnum should return false for ' '");
    TEST_ASSERT_FALSE_MESSAGE(ft_isalnum('\n'), "ft_isalnum should return false for '\\n'");
}
