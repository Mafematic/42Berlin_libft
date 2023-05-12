#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_memset(void)
{
    char str1[] = "test";
    char str2[] = "test";
    char str3[] = "test";
    char str4[] = "test";

    // Set characters to 'e' using ft_memset
    TEST_ASSERT_EQUAL_STRING("eeee", ft_memset(str1, 'e', 4));

    // Set characters to 'e' using memset
    TEST_ASSERT_EQUAL_STRING("eeee", memset(str2, 'e', 4));

    // Set characters to 'a' using ft_memset
    TEST_ASSERT_EQUAL_STRING("aaaa", ft_memset(str3, 'a', 4));

    // Set characters to 'a' using memset
    TEST_ASSERT_EQUAL_STRING("aaaa", memset(str4, 'a', 4));

    // Set characters to null byte using ft_memset
    TEST_ASSERT_EQUAL_STRING("\0est", ft_memset(str1, 0, 1));

    // Set characters to null byte using memset
    TEST_ASSERT_EQUAL_STRING("\0est", memset(str2, 0, 1));
}