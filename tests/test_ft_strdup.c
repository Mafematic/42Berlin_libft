#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_strdup(void) 
{
    const char *str = "Hello, World!";
    char *result = ft_strdup(str);

    // Assert that the duplicated string is correct
    TEST_ASSERT_EQUAL_STRING(str, result);

    // Free the memory allocated for the result
    free(result);

    // Add more test cases here
    const char *str_empty = "";
    char *result_empty = ft_strdup(str_empty);

    // Assert that the duplicated string is an empty string
    TEST_ASSERT_EQUAL_STRING(str_empty, result_empty);

    // Free the memory allocated for the result
    free(result_empty);
}