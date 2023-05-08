#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_memmove(void)
{
    char str[] = "hello world";
    ft_memmove(str + 6, str, 5);
    TEST_ASSERT_EQUAL_STRING("hello hello", str);

    char str1[] = "hello world";
    ft_memmove(str1, str1, 5);
    TEST_ASSERT_EQUAL_STRING("hello world", str1);

    char str2[] = "hello world";
    ft_memmove(str2, str2, 0);
    TEST_ASSERT_EQUAL_STRING("hello world", str2);

    char str3[] = "hello world";
    ft_memmove(str3 + 1, str3, 5);
    TEST_ASSERT_EQUAL_STRING("hhello world", str3);

    char str4[] = "hello";
    char str5[] = "       ";
    ft_memmove(str5, str4, 5);
    TEST_ASSERT_EQUAL_STRING("hello", str5);

    char str6[] = "hello";
    char str7[] = "       ";
    ft_memmove(str7, str6, 3);
    TEST_ASSERT_EQUAL_STRING("hel   ", str7);

    char str8[] = "hello\0world";
    ft_memmove(str8 + 6, str8, 11);
    TEST_ASSERT_EQUAL_STRING("hello hello", str8);
}