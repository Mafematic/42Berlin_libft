#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>
#include <limits.h>

void test_ft_bzero(void)
{
    // Zero length
    char str1[] = "test";
    bzero(str1, 0);
    TEST_ASSERT_EQUAL_STRING("test", str1);

    char str1_ft[] = "test";
    ft_bzero(str1_ft, 0);
    TEST_ASSERT_EQUAL_STRING("test", str1_ft);

    // Zero fill
    char str2[] = "test";
    bzero(str2, 4);
    TEST_ASSERT_EQUAL_STRING("", str2);

    char str2_ft[] = "test";
    ft_bzero(str2_ft, 4);
    TEST_ASSERT_EQUAL_STRING("", str2_ft);

    // Partial fill
    char str3[] = "test";
    bzero(str3, 2);
    char expected[] = "\0\0st";
    TEST_ASSERT_EQUAL_STRING(expected, str3);

    char str3_ft[] = "test";
    ft_bzero(str3_ft, 2);
    TEST_ASSERT_EQUAL_STRING(expected, str3_ft);

    // Full fill
    char str4[10];
    bzero(str4, 10);
    TEST_ASSERT_EQUAL_STRING("", str4);

    char str4_ft[10];
    ft_bzero(str4_ft, 10);
    TEST_ASSERT_EQUAL_STRING("", str4_ft);
}
