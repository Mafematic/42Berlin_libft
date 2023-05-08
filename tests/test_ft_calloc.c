#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_calloc(void)
{
    // Test 1 - Allocating memory for an array of 5 integers
    int *arr = (int *)ft_calloc(5, sizeof(int));
    TEST_ASSERT_NOT_NULL(arr);
    for (int i = 0; i < 5; i++)
    {
        TEST_ASSERT_EQUAL_INT(arr[i], 0);
    }
    free(arr);

    // Test 2 - Allocating memory for an array of 10 characters
    char *str = (char *)ft_calloc(10, sizeof(char));
    TEST_ASSERT_NOT_NULL(str);
    for (int i = 0; i < 10; i++)
    {
        TEST_ASSERT_EQUAL_INT(str[i], 0);
    }
    free(str);

    // Test 3 - Allocating memory for an array of 3 doubles
    double *doubles = (double *)ft_calloc(3, sizeof(double));
    TEST_ASSERT_NOT_NULL(doubles);
    for (int i = 0; i < 3; i++)
    {
        TEST_ASSERT_EQUAL_DOUBLE(doubles[i], 0.0);
    }
    free(doubles);

    // Test 4 - Allocating memory for an array of 0 elements
    int *empty = (int *)ft_calloc(0, sizeof(int));
    TEST_ASSERT_NOT_NULL(empty);
    free(empty);
}