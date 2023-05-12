#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_memmove(void)
{
    char str[] = "hello world";
    ft_memmove(str + 6, str, 5);
    TEST_ASSERT_EQUAL_STRING("hello hello", str);

    char str0[] = "hello world";
    memmove(str0 + 6, str0, 5);
    TEST_ASSERT_EQUAL_STRING("hello hello", str0);

    char str1[] = "hello world";
    ft_memmove(str1, str1, 5);
    TEST_ASSERT_EQUAL_STRING("hello world", str1);

    char str2[] = "hello world";
    memmove(str2, str2, 5);
    TEST_ASSERT_EQUAL_STRING("hello world", str2);

    char str3[] = "hello world";
    ft_memmove(str3, str3, 0);
    TEST_ASSERT_EQUAL_STRING("hello world", str3);

    char str4[] = "hello world";
    memmove(str4, str4, 0);
    TEST_ASSERT_EQUAL_STRING("hello world", str4);

	char str5[] = "hello world";
	ft_memmove(str5 + 1, str5, 5);
	TEST_ASSERT_EQUAL_STRING("hhelloworld", str5);

	char str6[] = "hello world";
	memmove(str6 + 1, str6, 5);
	TEST_ASSERT_EQUAL_STRING("hhelloworld", str6);

    char str7[] = "hello";
    char str8[] = "       ";
    ft_memmove(str8, str7, 5);
    TEST_ASSERT_EQUAL_STRING("hello  ", str8);

    char str9[] = "hello";
    char str10[] = "       ";
    memmove(str10, str9, 5);
    TEST_ASSERT_EQUAL_STRING("hello  ", str10);

    char str11[] = "hello";
    char str12[] = "       ";
    ft_memmove(str12, str11, 3);
    TEST_ASSERT_EQUAL_STRING("hel    ", str12);

    char str13[] = "hello";
    char str14[] = "       ";
    memmove(str14, str13, 3);
    TEST_ASSERT_EQUAL_STRING("hel    ", str14);
}