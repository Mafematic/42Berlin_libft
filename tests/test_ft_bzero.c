#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>
#include <limits.h>

void test_ft_bzero(void)
{
	// Zero fill
	char str2[] = "test";
	bzero(str2, sizeof(str2) - 1); // Use sizeof(str2) - 1 to exclude the null terminator
	TEST_ASSERT_EQUAL_STRING("", str2);

	char str2_ft[] = "test";
	ft_bzero(str2_ft, sizeof(str2_ft) - 1);
	TEST_ASSERT_EQUAL_STRING("", str2_ft);

	// Partial fill
	char str3[] = "test";
	bzero(str3, 2);
	char expected[] = "\0\0st";
	TEST_ASSERT_EQUAL_STRING(expected, str3);

	char str3_ft[] = "test";
	ft_bzero(str3_ft, 2);
	TEST_ASSERT_EQUAL_STRING(expected, str3_ft);

	// Full fill
	char str4[10];
	bzero(str4, sizeof(str4));
	TEST_ASSERT_EQUAL_STRING("", str4);

	char str4_ft[10];
	ft_bzero(str4_ft, sizeof(str4_ft));
	TEST_ASSERT_EQUAL_STRING("", str4_ft);
}
