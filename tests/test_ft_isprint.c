#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <ctype.h>

void test_ft_isprint(void) 
{
    TEST_ASSERT_TRUE_MESSAGE(ft_isprint('A'), "ft_isprint should return true for 'A'");
    TEST_ASSERT_TRUE_MESSAGE(isprint('A'), "isprint should return true for 'A'");

    TEST_ASSERT_FALSE_MESSAGE(ft_isprint('\t'), "ft_isprint should return false for '\\t'");
    TEST_ASSERT_FALSE_MESSAGE(isprint('\t'), "isprint should return false for '\\t'");
}
