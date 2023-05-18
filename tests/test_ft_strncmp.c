#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_strncmp(void)
{
    const char *str1 = "hello";
    const char *str2 = "hello";
    TEST_ASSERT_EQUAL_INT(strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_EQUAL_INT(strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_EQUAL_INT(strncmp(str1, str2, 3), ft_strncmp(str1, str2, 3));

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_EQUAL_INT(strncmp(str1, str2, 1), ft_strncmp(str1, str2, 1));

    str1 = "";
    str2 = "hello";
    TEST_ASSERT_EQUAL_INT(strncmp(str1, str2, 1), ft_strncmp(str1, str2, 1));

    str1 = "hello";
    str2 = "";
    TEST_ASSERT_EQUAL_INT(strncmp(str1, str2, 1), ft_strncmp(str1, str2, 1));

    str1 = "hello";
    TEST_ASSERT_EQUAL_INT(strncmp(str1, str1, 5), ft_strncmp(str1, str1, 5));
}
