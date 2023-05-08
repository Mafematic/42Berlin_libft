#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_strrchr(void)
{
    const char *str = "hello world";
    TEST_ASSERT_EQUAL_PTR(str + 10, ft_strrchr(str, 'l'));

    str = "hello world";
    TEST_ASSERT_NULL(ft_strrchr(str, 'z'));

    str = "hello world";
    TEST_ASSERT_EQUAL_PTR(str + ft_strlen(str) - 1, ft_strrchr(str, 'd'));

    str = "hello world";
    TEST_ASSERT_EQUAL_PTR(str + 9, ft_strrchr(str, 'o'));

    str = "hello world";
    TEST_ASSERT_EQUAL_PTR(str + ft_strlen(str), ft_strrchr(str, '\0'));
}