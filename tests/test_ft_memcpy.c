#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_memcpy(void)
{
    // Full copy
    char src1[] = "test";
    char dst1[5] = "foo"; // Increase destination buffer size to accommodate the copied data
    char dst1_expected[] = "test";
    TEST_ASSERT_EQUAL_STRING(dst1_expected, ft_memcpy(dst1, src1, sizeof(src1) - 1));
    TEST_ASSERT_EQUAL_STRING(dst1_expected, dst1);

    char dst1_b[5] = "foo";
    TEST_ASSERT_EQUAL_STRING(dst1_expected, memcpy(dst1_b, src1, sizeof(src1) - 1));
    TEST_ASSERT_EQUAL_STRING(dst1_expected, dst1_b);

    // Partial copy
    char src2[] = "test";
    char dst2[4] = "foo"; // Increase destination buffer size to accommodate the copied data
    char dst2_expected[] = "tes";
    TEST_ASSERT_EQUAL_STRING(dst2_expected, ft_memcpy(dst2, src2, 3)); // Changed the size to 3
    TEST_ASSERT_EQUAL_STRING(dst2_expected, dst2);

    char dst2_b[4] = "foo";
    TEST_ASSERT_EQUAL_STRING(dst2_expected, memcpy(dst2_b, src2, 3)); // Changed the size to 3
    TEST_ASSERT_EQUAL_STRING(dst2_expected, dst2_b);
}

