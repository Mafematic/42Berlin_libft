#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_putstr_fd(void)
{
    // Redirect stdout to a temporary file
    FILE *tempFile = fopen("temp.txt", "w");
    int original_stdout = dup(fileno(stdout));
    dup2(fileno(tempFile), fileno(stdout));

    // Call ft_putstr_fd with the desired string and file descriptor
    ft_putstr_fd("Hello", fileno(stdout));

    // Close the temporary file and restore stdout
    fclose(tempFile);
    dup2(original_stdout, fileno(stdout));

    // Open the temporary file for reading
    tempFile = fopen("temp.txt", "r");

    // Read the content of the temporary file
    char buffer[100];
    fgets(buffer, sizeof(buffer), tempFile);

    // Close the temporary file
    fclose(tempFile);

    // Check the expected output
    TEST_ASSERT_EQUAL_STRING("Hello", buffer);
}
