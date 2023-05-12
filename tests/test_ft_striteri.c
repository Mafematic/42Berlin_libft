#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include "ft_striteri.c"

void test_ft_striteri(void)
{
    char str1[] = "hello world";
    ft_striteri(str1, change_character);
    TEST_ASSERT_EQUAL_STRING("HeLlO WoRlD", str1);

    char str2[] = "abcdef";
    ft_striteri(str2, change_character);
    TEST_ASSERT_EQUAL_STRING("AbCdEf", str2);

    char str3[] = "";
    ft_striteri(str3, change_character);
    TEST_ASSERT_EQUAL_STRING("", str3);
}