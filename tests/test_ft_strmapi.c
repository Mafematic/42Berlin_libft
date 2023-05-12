#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <stdlib.h>
#include "ft_strmapi.c"

void test_ft_strmapi(void)
{
    char s1[] = "abcdefghij";
    char expected1[] = "rbrdrfrhrj";
    char *result1 = ft_strmapi(s1, change_character_at_index);
    TEST_ASSERT_EQUAL_STRING(expected1, result1);
    free(result1); // Don't forget to free the memory you allocated.

    char s2[] = "1234567890";
    char expected2[] = "r2r4r6r8r0";
    char *result2 = ft_strmapi(s2, change_character_at_index);
    TEST_ASSERT_EQUAL_STRING(expected2, result2);
    free(result2); // Don't forget to free the memory you allocated.
}
