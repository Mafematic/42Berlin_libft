#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
/*#include <bsd/string.h> */
#include <string.h>

void test_ft_strlcpy(void)
{
    // Testing strlcpy
    char src1[] = "Hello";
    char dst1[10] = "World";
    size_t ret1 = strlcpy(dst1, src1, 10);
    TEST_ASSERT_EQUAL_STRING("Hello", dst1);
    TEST_ASSERT_EQUAL(5, ret1);

    char src2[] = "Hello";
    char dst2[3] = "AB";
    size_t ret2 = strlcpy(dst2, src2, 3);
    TEST_ASSERT_EQUAL_STRING("He", dst2);
    TEST_ASSERT_EQUAL(5, ret2);

    char src3[] = "Hello";
    char dst3[3] = "AB";
    size_t ret3 = strlcpy(dst3, src3, 2);
    TEST_ASSERT_EQUAL_STRING("H", dst3);
    TEST_ASSERT_EQUAL(5, ret3);

    char src4[] = "";
    char dst4[5] = "ABCD";
    size_t ret4 = strlcpy(dst4, src4, 2);
    TEST_ASSERT_EQUAL_STRING("", dst4);
    TEST_ASSERT_EQUAL(0, ret4);

    // Testing ft_strlcpy
    char src5[] = "Hello";
    char dst5[10] = "World";
    size_t ret5 = ft_strlcpy(dst5, src5, 10);
    TEST_ASSERT_EQUAL_STRING("Hello", dst5);
    TEST_ASSERT_EQUAL(5, ret5);

    char src6[] = "Hello";
    char dst6[3] = "AB";
    size_t ret6 = ft_strlcpy(dst6, src6, 3);
    TEST_ASSERT_EQUAL_STRING("He", dst6);
    TEST_ASSERT_EQUAL(5, ret6);

    char src7[] = "Hello";
    char dst7[3] = "AB";
    size_t ret7 = ft_strlcpy(dst7, src7, 2);
    TEST_ASSERT_EQUAL_STRING("H", dst7);
    TEST_ASSERT_EQUAL(5, ret7);

    char src8[] = "";
    char dst8[5] = "ABCD";
    size_t ret8 = ft_strlcpy(dst8, src8, 2);
    TEST_ASSERT_EQUAL_STRING("", dst8);
    TEST_ASSERT_EQUAL(0, ret8);
}


