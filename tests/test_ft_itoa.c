#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_itoa(void)
{
    // Test cases
    int num1 = 123;
    char *expected1 = "123";
    char *result1 = ft_itoa(num1);
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected1, result1, "ft_itoa failed for positive number");

    int num2 = -456;
    char *expected2 = "-456";
    char *result2 = ft_itoa(num2);
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected2, result2, "ft_itoa failed for negative number");

    int num3 = 0;
    char *expected3 = "0";
    char *result3 = ft_itoa(num3);
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected3, result3, "ft_itoa failed for zero");

    // Clean up dynamically allocated memory
    free(result1);
    free(result2);
    free(result3);
}