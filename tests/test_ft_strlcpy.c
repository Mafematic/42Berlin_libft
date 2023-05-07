#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_strlcpy(void)
{
    char src1[] = "Hello";
    char dst1[10] = "World";
    size_t ret1 = ft_strlcpy(dst1, src1, 10);
    TEST_ASSERT_EQUAL_STRING("Hello", dst1);
    TEST_ASSERT_EQUAL(5, ret1);

    char src2[] = "Hello";
    char dst2[3] = "AB";
    size_t ret2 = ft_strlcpy(dst2, src2, 3);
    TEST_ASSERT_EQUAL_STRING("He", dst2);
    TEST_ASSERT_EQUAL(5, ret2);

    char src3[] = "Hello";
    char dst3[3] = "AB";
    size_t ret3 = ft_strlcpy(dst3, src3, 2);
    TEST_ASSERT_EQUAL_STRING("H", dst3);
    TEST_ASSERT_EQUAL(5, ret3);

    char src4[] = "";
    char dst4[5] = "ABCD";
    size_t ret4 = ft_strlcpy(dst4, src4, 2);
    TEST_ASSERT_EQUAL_STRING("", dst4);
    TEST_ASSERT_EQUAL(0, ret4);
}