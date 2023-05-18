#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_substr(void) 
{
    // Test Case 1: Normal Case
    const char *str1 = "Hello, World!";
    unsigned int start1 = 7;
    size_t len1 = 5;
    const char *expected_result1 = "World";
    char *result1 = ft_substr(str1, start1, len1);
    TEST_ASSERT_EQUAL_STRING(expected_result1, result1);
    free(result1);

    // Test Case 2: Full String
    const char *str2 = "Hello, World!";
    unsigned int start2 = 0;
    size_t len2 = 13;
    const char *expected_result2 = "Hello, World!";
    char *result2 = ft_substr(str2, start2, len2);
    TEST_ASSERT_EQUAL_STRING(expected_result2, result2);
    free(result2);

    // Test Case 3: Substring at Start
    const char *str3 = "Hello, World!";
    unsigned int start3 = 0;
    size_t len3 = 5;
    const char *expected_result3 = "Hello";
    char *result3 = ft_substr(str3, start3, len3);
    TEST_ASSERT_EQUAL_STRING(expected_result3, result3);
    free(result3);

    // Test Case 4: Substring at End
    const char *str4 = "Hello, World!";
    unsigned int start4 = 7;
    size_t len4 = 6;
    const char *expected_result4 = "World!";
    char *result4 = ft_substr(str4, start4, len4);
    TEST_ASSERT_EQUAL_STRING(expected_result4, result4);
    free(result4);

    // Test Case 5: Empty String
    const char *str5 = "";
    unsigned int start5 = 0;
    size_t len5 = 0;
    const char *expected_result5 = "";
    char *result5 = ft_substr(str5, start5, len5);
    TEST_ASSERT_EQUAL_STRING(expected_result5, result5);
    free(result5);

    // Test Case 6: Start is Beyond the String Length
    const char *str6 = "Hello, World!";
    unsigned int start6 = 50;
    size_t len6 = 5;
    const char *expected_result6 = "";
    char *result6 = ft_substr(str6, start6, len6);
    TEST_ASSERT_EQUAL_STRING(expected_result6, result6);
    free(result6);

    // Test Case 7: Null String
    const char *str7 = NULL;
    unsigned int start7 = 0;
    size_t len7 = 5;
    char *result7 = ft_substr(str7, start7, len7);
    TEST_ASSERT_NULL(result7);
}