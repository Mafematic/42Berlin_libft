#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_strncmp(void)
{
    const char *str1 = "hello";
    const char *str2 = "hello";
    TEST_ASSERT_EQUAL_INT(0, ft_strncmp(str1, str2, 5));

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_TRUE(ft_strncmp(str1, str2, 5) < 0);

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_TRUE(ft_strncmp(str1, str2, 3) < 0);

    str1 = "hello";
    str2 = "world";
    TEST_ASSERT_TRUE(ft_strncmp(str1, str2, 1) > 0);

    str1 = "";
    str2 = "hello";
    TEST_ASSERT_TRUE(ft_strncmp(str1, str2, 1) < 0);

    str1 = "hello";
    str2 = "";
    TEST_ASSERT_TRUE(ft_strncmp(str1, str2, 1) > 0);

    str1 = "hello";
    TEST_ASSERT_EQUAL_INT(0, ft_strncmp(str1, str1, 5));
}