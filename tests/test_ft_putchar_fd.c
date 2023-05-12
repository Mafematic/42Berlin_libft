#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_putchar_fd(void)
{
    // Redirect stdout to a temporary file
    FILE *tempFile = fopen("temp.txt", "w");
    int original_stdout = dup(fileno(stdout));
    dup2(fileno(tempFile), fileno(stdout));

    // Call ft_putchar_fd with the desired character and file descriptor
    ft_putchar_fd('H', fileno(stdout));

    // Close the temporary file and restore stdout
    fclose(tempFile);
    dup2(original_stdout, fileno(stdout));

    // Open the temporary file for reading
    tempFile = fopen("temp.txt", "r");

    // Read the content of the temporary file
    char output = fgetc(tempFile);

    // Close the temporary file
    fclose(tempFile);

    // Check the expected output
    TEST_ASSERT_EQUAL_CHAR('H', output);
}