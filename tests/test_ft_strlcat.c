#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_strlcat(void)
{
    char src1[] = "Hello";
    char dst1[10] = "World";
    size_t ret1 = ft_strlcat(dst1, src1, 10);
    TEST_ASSERT_EQUAL_STRING("WorldHell", dst1);
    TEST_ASSERT_EQUAL(10, ret1);

    char src2[] = "Bar";
    char dst2[5] = "Foo";
    size_t ret2 = ft_strlcat(dst2, src2, 3);
    TEST_ASSERT_EQUAL_STRING("Foo", dst2);
    TEST_ASSERT_EQUAL(6, ret2);

    char src3[] = "abc";
    char dst3[6] = "def";
    size_t ret3 = ft_strlcat(dst3, src3, 0);
    TEST_ASSERT_EQUAL_STRING("def", dst3);
    TEST_ASSERT_EQUAL(3, ret3);

    char src4[] = "Hello";
    char dst4[5] = "";
    size_t ret4 = ft_strlcat(dst4, src4, 5);
    TEST_ASSERT_EQUAL_STRING("Hell", dst4);
    TEST_ASSERT_EQUAL(5, ret4);
}