#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

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

	// Test against the real strlcat
	char src5[] = "Hello";
	char dst5[10] = "World";
	size_t ret5 = strlcat(dst5, src5, 10);
	TEST_ASSERT_EQUAL_STRING("WorldHell", dst5);
	TEST_ASSERT_EQUAL(ret1, ret5);

	char src6[] = "Bar";
	char dst6[5] = "Foo";
	size_t ret6 = strlcat(dst6, src6, 3);
	TEST_ASSERT_EQUAL_STRING("Foo", dst6);
	TEST_ASSERT_EQUAL(ret2, ret6);

	char src7[] = "abc";
	char dst7[6] = "def";
	size_t ret7 = strlcat(dst7, src7, 0);
	TEST_ASSERT_EQUAL_STRING("def", dst7);
	TEST_ASSERT_EQUAL(ret3, ret7);

	char src8[] = "Hello";
	char dst8[5] = "";
	size_t ret8 = strlcat(dst8, src8, 5);
	TEST_ASSERT_EQUAL_STRING("Hell", dst8);
	TEST_ASSERT_EQUAL(ret4, ret8);
}
