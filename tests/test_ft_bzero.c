#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_bzero(void)
{
    // Zero length
    char str1[] = "test";
    ft_bzero(str1, 0);
    TEST_ASSERT_EQUAL_STRING("test", str1);

    // Zero fill
    char str2[] = "test";
    ft_bzero(str2, 4);
    TEST_ASSERT_EQUAL_STRING("", str2);

    // Partial fill
    char str3[] = "test";
    ft_bzero(str3, 2);
    char expected[] = "\0\0st";
    TEST_ASSERT_EQUAL_STRING(expected, str3);

    // Full fill
    char str4[10];
    ft_bzero(str4, 10);
    TEST_ASSERT_EQUAL_STRING("", str4);
}
