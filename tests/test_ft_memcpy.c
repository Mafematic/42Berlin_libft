#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_memcpy(void)
{
    // Full copy
    char src1[] = "test";
    char dst1[] = "foo";
    TEST_ASSERT_EQUAL_STRING("test", ft_memcpy(dst1, src1, 5));
    TEST_ASSERT_EQUAL_STRING("test", dst1);

    // Partial copy
    char src2[] = "test";
    char dst2[] = "foo";
    TEST_ASSERT_EQUAL_STRING("sto", ft_memcpy(dst2, &src2[2], 2));
    TEST_ASSERT_EQUAL_STRING("sto", dst2);

    // Null pointer source
    char dst3[] = "foo";
    TEST_ASSERT_EQUAL_PTR(NULL, ft_memcpy(dst3, NULL, 5));
    TEST_ASSERT_EQUAL_STRING("foo", dst3);

    // Null pointer destination
    char src4[] = "test";
    TEST_ASSERT_EQUAL_PTR(NULL, ft_memcpy(NULL, src4, 5));
}