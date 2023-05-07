#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_strchr(void)
{
    char str[] = "Hello, world!";
    char *ptr;

    ptr = ft_strchr(str, 'l');
    TEST_ASSERT_EQUAL_PTR(&str[2], ptr);

    ptr = ft_strchr(str, 'o');
    TEST_ASSERT_EQUAL_PTR(&str[4], ptr);

    ptr = ft_strchr(str, '\0');
    TEST_ASSERT_EQUAL_PTR(&str[13], ptr);

    ptr = ft_strchr(str, 'z');
    TEST_ASSERT_EQUAL_PTR(NULL, ptr);
}