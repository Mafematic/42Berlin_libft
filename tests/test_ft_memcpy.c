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
	TEST_ASSERT_EQUAL_STRING(dst1_expected, memcpy(dst1, src1, sizeof(src1) - 1));

	// Partial copy
	char src2[] = "test";
	char dst2[4] = "foo"; // Increase destination buffer size to accommodate the copied data
	char dst2_expected[] = "sto";
	TEST_ASSERT_EQUAL_STRING(dst2_expected, ft_memcpy(dst2, &src2[2], sizeof(src2) - 2));
	TEST_ASSERT_EQUAL_STRING(dst2_expected, dst2);
	TEST_ASSERT_EQUAL_STRING(dst2_expected, memcpy(dst2, &src2[2], sizeof(src2) - 2));
}