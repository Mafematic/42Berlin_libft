#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include "ctype.h"

void test_ft_isalnum(void)
{
    // Test if ft_isalnum returns true for alphanumeric characters
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('a') != 0, "ft_isalnum should return non-zero for 'a'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('5') != 0, "ft_isalnum should return non-zero for '5'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('Z') != 0, "ft_isalnum should return non-zero for 'Z'");

    // Test if ft_isalnum returns false for non-alphanumeric characters
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('#') == 0, "ft_isalnum should return zero for '#'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum(' ') == 0, "ft_isalnum should return zero for ' '");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalnum('\n') == 0, "ft_isalnum should return zero for '\\n'");

    // Compare with isalnum() function from ctype.h
    TEST_ASSERT_EQUAL_MESSAGE(isalnum('a') != 0, ft_isalnum('a') != 0, "ft_isalnum and isalnum should return the same for 'a'");
    TEST_ASSERT_EQUAL_MESSAGE(isalnum('5') != 0, ft_isalnum('5') != 0, "ft_isalnum and isalnum should return the same for '5'");
    TEST_ASSERT_EQUAL_MESSAGE(isalnum('Z') != 0, ft_isalnum('Z') != 0, "ft_isalnum and isalnum should return the same for 'Z'");
    TEST_ASSERT_EQUAL_MESSAGE(isalnum('#') == 0, ft_isalnum('#') == 0, "ft_isalnum and isalnum should return the same for '#'");
    TEST_ASSERT_EQUAL_MESSAGE(isalnum(' ') == 0, ft_isalnum(' ') == 0, "ft_isalnum and isalnum should return the same for ' '");
    TEST_ASSERT_EQUAL_MESSAGE(isalnum('\n') == 0, ft_isalnum('\n') == 0, "ft_isalnum and isalnum should return the same for '\\n'");
}
