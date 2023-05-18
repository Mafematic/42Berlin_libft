#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_strrchr(void)
{
    const char *str = "hello world";

	//TEST_ASSERT_EQUAL_PTR(str + 10, ft_strrchr(str, 'l'));
    //TEST_ASSERT_EQUAL_PTR(str + 10, strrchr(str, 'l'));

    str = "hello world";
    TEST_ASSERT_NULL(ft_strrchr(str, 'z'));
    TEST_ASSERT_NULL(strrchr(str, 'z'));

    str = "hello world";
    TEST_ASSERT_EQUAL_PTR(str + strlen(str) - 1, ft_strrchr(str, 'd'));
    TEST_ASSERT_EQUAL_PTR(str + strlen(str) - 1, strrchr(str, 'd'));

    str = "hello world";
    TEST_ASSERT_EQUAL_PTR(str + 7, ft_strrchr(str, 'o'));
    TEST_ASSERT_EQUAL_PTR(str + 7, strrchr(str, 'o'));

    str = "hello world";
    TEST_ASSERT_EQUAL_PTR(str + strlen(str), ft_strrchr(str, '\0'));
    TEST_ASSERT_EQUAL_PTR(str + strlen(str), strrchr(str, '\0'));
}
