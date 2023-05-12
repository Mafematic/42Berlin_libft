#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_strchr(void)
{
    char str[] = "Hello, world!";
    char *ptr_ft, *ptr_std;

    // Test ft_strchr
    ptr_ft = ft_strchr(str, 'l');

    // Test strchr
    ptr_std = strchr(str, 'l');

    TEST_ASSERT_EQUAL_PTR(ptr_std, ptr_ft);

    ptr_ft = ft_strchr(str, 'o');
    ptr_std = strchr(str, 'o');
    TEST_ASSERT_EQUAL_PTR(ptr_std, ptr_ft);

    ptr_ft = ft_strchr(str, '\0');
    ptr_std = strchr(str, '\0');
    TEST_ASSERT_EQUAL_PTR(ptr_std, ptr_ft);

    ptr_ft = ft_strchr(str, 'z');
    ptr_std = strchr(str, 'z');
    TEST_ASSERT_EQUAL_PTR(ptr_std, ptr_ft);
}