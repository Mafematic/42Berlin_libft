#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_memchr(void)
{
    // Positive test cases
    char str1[] = "hello";
    TEST_ASSERT_EQUAL_PTR(ft_memchr(str1, 'e', 5), &str1[1]);
    TEST_ASSERT_EQUAL_PTR(ft_memchr(str1, 'l', 5), &str1[2]);
    TEST_ASSERT_EQUAL_PTR(ft_memchr(str1, '\0', 6), &str1[5]);

    // Negative test cases
    char str2[] = "world";
    TEST_ASSERT_NULL_MESSAGE(ft_memchr(str2, 'a', 5), "ft_memchr should return NULL when character is not found");
    TEST_ASSERT_NULL_MESSAGE(ft_memchr(str2, '\0', 5), "ft_memchr should return NULL when null character is not found in specified length");
}