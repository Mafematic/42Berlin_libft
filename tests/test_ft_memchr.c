#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_memchr(void)
{
    // Positive test cases
    char str1[] = "hello";
    TEST_ASSERT_EQUAL_PTR_MESSAGE(ft_memchr(str1, 'e', 5), &str1[1], "ft_memchr failed for character 'e'");
    TEST_ASSERT_EQUAL_PTR_MESSAGE(ft_memchr(str1, 'l', 5), &str1[2], "ft_memchr failed for character 'l'");
    TEST_ASSERT_EQUAL_PTR_MESSAGE(ft_memchr(str1, '\0', 6), &str1[5], "ft_memchr failed for null character");

    // Negative test cases
    char str2[] = "world";
    TEST_ASSERT_NULL_MESSAGE(ft_memchr(str2, 'a', 5), "ft_memchr should return NULL when character is not found");
    TEST_ASSERT_NULL_MESSAGE(ft_memchr(str2, '\0', 5), "ft_memchr should return NULL when null character is not found in specified length");

    // Compare with original memchr function
    TEST_ASSERT_EQUAL_PTR_MESSAGE(memchr(str1, 'e', 5), ft_memchr(str1, 'e', 5), "ft_memchr does not match memchr for character 'e'");
    TEST_ASSERT_EQUAL_PTR_MESSAGE(memchr(str1, 'l', 5), ft_memchr(str1, 'l', 5), "ft_memchr does not match memchr for character 'l'");
    TEST_ASSERT_EQUAL_PTR_MESSAGE(memchr(str1, '\0', 6), ft_memchr(str1, '\0', 6), "ft_memchr does not match memchr for null character");
    TEST_ASSERT_EQUAL_PTR_MESSAGE(memchr(str2, 'a', 5), ft_memchr(str2, 'a', 5), "ft_memchr does not match memchr when character is not found");
    TEST_ASSERT_EQUAL_PTR_MESSAGE(memchr(str2, '\0', 5), ft_memchr(str2, '\0', 5), "ft_memchr does not match memchr when null character is not found in specified length");
}