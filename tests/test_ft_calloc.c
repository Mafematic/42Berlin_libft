#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>

void test_ft_calloc(void)
{
    // Test 1 - Allocating memory for an array of 5 integers
    int *arr = (int *)ft_calloc(5, sizeof(int));
    int *arr_std = (int *)calloc(5, sizeof(int));

    TEST_ASSERT_NOT_NULL(arr);
    TEST_ASSERT_NOT_NULL(arr_std);

    for (int i = 0; i < 5; i++)
    {
        TEST_ASSERT_EQUAL_INT(arr[i], arr_std[i]);
    }

    free(arr);
    free(arr_std);

    // Test 2 - Allocating memory for an array of 10 characters
    char *str = (char *)ft_calloc(10, sizeof(char));
    char *str_std = (char *)calloc(10, sizeof(char));

    TEST_ASSERT_NOT_NULL(str);
    TEST_ASSERT_NOT_NULL(str_std);

    for (int i = 0; i < 10; i++)
    {
        TEST_ASSERT_EQUAL_INT(str[i], str_std[i]);
    }

    free(str);
    free(str_std);

    // Test 3 - Allocating memory for an array of 3 doubles
    double *doubles = (double *)ft_calloc(3, sizeof(double));
    double *doubles_std = (double *)calloc(3, sizeof(double));

    TEST_ASSERT_NOT_NULL(doubles);
    TEST_ASSERT_NOT_NULL(doubles_std);

    for (int i = 0; i < 3; i++)
    {
        TEST_ASSERT_EQUAL_DOUBLE(doubles[i], doubles_std[i]);
    }

    free(doubles);
    free(doubles_std);

    // Test 4 - Allocating memory for an array of 0 elements
    int *empty = (int *)ft_calloc(0, sizeof(int));
    int *empty_std = (int *)calloc(0, sizeof(int));

	TEST_ASSERT_NOT_NULL(empty);
	TEST_ASSERT_NOT_NULL(empty_std);

    free(empty);
    free(empty_std);
}