#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_memcmp(void)
{
    // Test cases
    const char *str1 = "hello";
    const char *str2 = "hello";
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, ft_memcmp(str1, str2, 5), "ft_memcmp failed for equal strings");
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, memcmp(str1, str2, 5), "memcmp failed for equal strings");

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_TRUE_MESSAGE(ft_memcmp(str1, str2, 5) < 0, "ft_memcmp failed for str1 < str2");
    TEST_ASSERT_TRUE_MESSAGE(memcmp(str1, str2, 5) < 0, "memcmp failed for str1 < str2");

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_TRUE_MESSAGE(ft_memcmp(str1, str2, 3) < 0, "ft_memcmp failed for str1 < str2 with shorter length");
    TEST_ASSERT_TRUE_MESSAGE(memcmp(str1, str2, 3) < 0, "memcmp failed for str1 < str2 with shorter length");

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_TRUE_MESSAGE(ft_memcmp(str1, str2, 1) < 0, "ft_memcmp failed for str1 < str2");
    TEST_ASSERT_TRUE_MESSAGE(memcmp(str1, str2, 1) < 0, "memcmp failed for str1 < str2");

    str1 = "";
    str2 = "";
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, ft_memcmp(str1, str2, 0), "ft_memcmp failed for empty strings with 0 length");
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, memcmp(str1, str2, 0), "memcmp failed for empty strings with 0 length");

    str1 = "hello";
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, ft_memcmp(str1, str1, 5), "ft_memcmp failed for equal strings");
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, memcmp(str1, str1, 5), "memcmp failed for equal strings");

    unsigned char str3[] = {'h', 'e', 'l', 'l', 'o', '\0', 'w', 'o', 'r', 'l', 'd'};
    unsigned char str4[] = {'h', 'e', 'l', 'l', 'o', '\0', 't', 'h', 'e', 'r', 'e'};
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, ft_memcmp(str3, str4, 6), "ft_memcmp failed for equal strings with null character");
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, memcmp(str3, str4, 6), "memcmp failed for equal strings with null character");
}