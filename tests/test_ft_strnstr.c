#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_strnstr(void)
{
    const char *str = "hello world";
    TEST_ASSERT_EQUAL_STRING(str, ft_strnstr(str, str, ft_strlen(str)));

    str = "hello world";
    TEST_ASSERT_EQUAL_STRING("world", ft_strnstr(str, "world", ft_strlen(str)));

    str = "hello";
    TEST_ASSERT_NULL(ft_strnstr(str, "world", ft_strlen(str)));

    str = "hello world";
    TEST_ASSERT_EQUAL_STRING(str, ft_strnstr(str, "", ft_strlen(str)));

    str = "hello world";
    TEST_ASSERT_EQUAL_STRING(str, ft_strnstr(str, "", ft_strlen(str)));

    str = "hello world";
    TEST_ASSERT_NULL(ft_strnstr(str, "foo", ft_strlen(str)));

    str = "hello world";
    TEST_ASSERT_NULL(ft_strnstr(str, "foobar", ft_strlen(str)));
}