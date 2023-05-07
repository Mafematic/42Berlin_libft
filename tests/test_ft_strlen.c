#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_strlen(void)
{
    const char str1[] = "Hello";
    TEST_ASSERT_EQUAL(5, ft_strlen(str1));

    const char str2[] = "";
    TEST_ASSERT_EQUAL(0, ft_strlen(str2));

    const char str3[] = "The quick brown fox jumps over the lazy dog";
    TEST_ASSERT_EQUAL(43, ft_strlen(str3));
}