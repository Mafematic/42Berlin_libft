#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_isalpha(void) 
{
    // Positive test cases
    TEST_ASSERT_TRUE_MESSAGE(ft_isalpha('A'), "ft_isalpha should return true for 'A'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalpha('z'), "ft_isalpha should return true for 'z'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalpha('M'), "ft_isalpha should return true for 'M'");
    TEST_ASSERT_TRUE_MESSAGE(ft_isalpha('n'), "ft_isalpha should return true for 'n'");

    // Negative test cases
    TEST_ASSERT_FALSE_MESSAGE(ft_isalpha('1'), "ft_isalpha should return false for '1'");
    TEST_ASSERT_FALSE_MESSAGE(ft_isalpha('@'), "ft_isalpha should return false for '@'");
    TEST_ASSERT_FALSE_MESSAGE(ft_isalpha('\n'), "ft_isalpha should return false for '\\n'");
}