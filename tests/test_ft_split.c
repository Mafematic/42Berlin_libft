#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_split(void) 
{
    char str[] = ",,,Hello,this,is,a,test,,,"; 
    char c = ',';
    char **result = ft_split(str, c);

    // Assert the expected substrings
    TEST_ASSERT_EQUAL_STRING("Hello", result[0]);
    TEST_ASSERT_EQUAL_STRING("this", result[1]);
    TEST_ASSERT_EQUAL_STRING("is", result[2]);
    TEST_ASSERT_EQUAL_STRING("a", result[3]);
    TEST_ASSERT_EQUAL_STRING("test", result[4]);
    TEST_ASSERT_NULL(result[5]);

    // Free the memory allocated for the result
    int i = 0;
    while (result[i] != NULL) {
        free(result[i]);
        i++;
    }
    free(result);

    // Add more test cases here
    char str_empty[] = ""; 
    char c_empty = ',';
    char **result_empty = ft_split(str_empty, c_empty);

    // Assert that the result is an empty array
    TEST_ASSERT_NULL(result_empty);

    // Free the memory allocated for the result
    free(result_empty);

    char str_no_delim[] = "Hello"; 
    char c_no_delim = ',';
    char **result_no_delim = ft_split(str_no_delim, c_no_delim);

    // Assert that the result is an array with a single element
    TEST_ASSERT_EQUAL_STRING("Hello", result_no_delim[0]);
    TEST_ASSERT_NULL(result_no_delim[1]);

    // Free the memory allocated for the result
    free(result_no_delim);

    char str_multi_delim[] = "This,is,a,test"; 
    char c_multi_delim = ',';
    char **result_multi_delim = ft_split(str_multi_delim, c_multi_delim);

    // Assert the expected substrings
    TEST_ASSERT_EQUAL_STRING("This", result_multi_delim[0]);
    TEST_ASSERT_EQUAL_STRING("is", result_multi_delim[1]);
    TEST_ASSERT_EQUAL_STRING("a", result_multi_delim[2]);
    TEST_ASSERT_EQUAL_STRING("test", result_multi_delim[3]);
    TEST_ASSERT_NULL(result_multi_delim[4]);

    // Free the memory allocated for the result
    int j = 0;
    while (result_multi_delim[j] != NULL) {
        free(result_multi_delim[j]);
        j++;
    }
    free(result_multi_delim);

    char str_special_chars[] = "Hello!@#$%^&*()World"; 
    char c_special_chars = '!';
    char **result_special_chars = ft_split(str_special_chars, c_special_chars);

    // Assert the expected substrings
    TEST_ASSERT_EQUAL_STRING("Hello", result_special_chars[0]);
    TEST_ASSERT_EQUAL_STRING("@#$%^&*()World", result_special_chars[1]);
    TEST_ASSERT_NULL(result_special_chars[2]);

    // Free the memory allocated for the result
    int k = 0;
    while (result_special_chars[k] != NULL) {
        free(result_special_chars[k]);
        k++;
    }
    free(result_special_chars);
}