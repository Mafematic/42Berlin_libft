#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_strtrim(void)
{
    // Test Case 1: Basic test
    const char *str1 = "  Hello, World!  ";
    const char *set1 = " ";
    const char *expected_result1 = "Hello, World!";
    char *result1 = ft_strtrim(str1, set1);
    TEST_ASSERT_EQUAL_STRING(expected_result1, result1);
    free(result1);

    // Test Case 2: Empty string
    const char *str2 = "";
    const char *set2 = " ";
    const char *expected_result2 = "";
    char *result2 = ft_strtrim(str2, set2);
    TEST_ASSERT_EQUAL_STRING(expected_result2, result2);
    free(result2);

    // Test Case 3: No trimming required
    const char *str3 = "Hello, World!";
    const char *set3 = " ";
    const char *expected_result3 = "Hello, World!";
    char *result3 = ft_strtrim(str3, set3);
    TEST_ASSERT_EQUAL_STRING(expected_result3, result3);
    free(result3);

	
    // Test Case 4: Null string
    const char *str4 = NULL;
    const char *set4 = " ";
    char *result4 = ft_strtrim(str4, set4);
    TEST_ASSERT_NULL(result4);

    // Test Case 5: Only spaces in string
    const char *str5 = "     ";
    const char *set5 = " ";
    const char *expected_result5 = "";
    char *result5 = ft_strtrim(str5, set5);
    TEST_ASSERT_EQUAL_STRING(expected_result5, result5);
    free(result5);

    // Test Case 6: Multiple types of characters in set
    const char *str6 = "!!Hello, World!!";
    const char *set6 = "! ";
    const char *expected_result6 = "Hello, World";
    char *result6 = ft_strtrim(str6, set6);
    TEST_ASSERT_EQUAL_STRING(expected_result6, result6);
    free(result6);

    // Test Case 7: String contains only characters from set
    const char *str7 = "!!!!!";
    const char *set7 = "!";
    const char *expected_result7 = "";
    char *result7 = ft_strtrim(str7, set7);
    TEST_ASSERT_EQUAL_STRING(expected_result7, result7);
    free(result7);

    // Test Case 8: Characters to trim in middle of string (should not be trimmed)
    const char *str8 = "Hello, World!";
    const char *set8 = "o";
    const char *expected_result8 = "Hello, World!";
    char *result8 = ft_strtrim(str8, set8);
    TEST_ASSERT_EQUAL_STRING(expected_result8, result8);
    free(result8);
}