#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_strjoin(void)
{
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    const char *expected_result = "Hello, World!";
    char *result = ft_strjoin(str1, str2);

    // Assert that the joined string is correct
    TEST_ASSERT_EQUAL_STRING(expected_result, result);

    // Free the memory allocated for the result
    free(result);

	
    // Test case: Empty strings
    const char *str1_empty = "";
    const char *str2_empty = "";
    const char *expected_result_empty = "";
    char *result_empty = ft_strjoin(str1_empty, str2_empty);

    // Assert that the joined string is an empty string
    TEST_ASSERT_EQUAL_STRING(expected_result_empty, result_empty);

    // Free the memory allocated for the result
    free(result_empty);
	
	
    // Test case: Null strings
    const char *str1_null = NULL;
    const char *str2_null = NULL;
    char *result_null = ft_strjoin(str1_null, str2_null);

    // Assert that the joined string is NULL
    TEST_ASSERT_NULL(result_null);

	
    // Test case: One string is empty
    const char *str1_empty2 = "Hello, ";
    const char *str2_empty2 = "";
    const char *expected_result_empty2 = "Hello, ";
    char *result_empty2 = ft_strjoin(str1_empty2, str2_empty2);

    // Assert that the joined string is correct
    TEST_ASSERT_EQUAL_STRING(expected_result_empty2, result_empty2);

    // Free the memory allocated for the result
    free(result_empty2);

	
	// Test case: One string is NULL
	const char *str1_null2 = "Hello, ";
	const char *str2_null2 = NULL;
	char *result_null2 = ft_strjoin(str1_null2, str2_null2);

	// Assert that the joined string is not NULL
	TEST_ASSERT_NOT_NULL(result_null2);

	// Free the memory allocated for the result
	free(result_null2);

	
    // Test case: Both strings are NULL
    const char *str1_null3 = NULL;
    const char *str2_null3 = NULL;
    char *result_null3 = ft_strjoin(str1_null3, str2_null3);

    // Assert that the joined string is NULL
    TEST_ASSERT_NULL(result_null3);

    // Add more test cases here
    const char *str1_custom = "Open";
    const char *str2_custom = "AI";
    const char *expected_result_custom = "OpenAI";
    char *result_custom = ft_strjoin(str1_custom, str2_custom);

    // Assert that the joined string is correct
    TEST_ASSERT_EQUAL_STRING(expected_result_custom, result_custom);


    // Free the memory allocated for the result
    free(result_custom);
	
}