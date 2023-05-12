#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"
#include <string.h>

void test_ft_putnbr_fd(void)
{
    // Redirect stdout to a temporary file
    FILE *tempFile = fopen("temp.txt", "w");
    int original_stdout = dup(fileno(stdout));
    dup2(fileno(tempFile), fileno(stdout));

    // Call ft_putnbr_fd with different input values and file descriptor
    ft_putnbr_fd(2147483647, fileno(stdout));
    ft_putnbr_fd(-456, fileno(stdout));
    ft_putnbr_fd(0, fileno(stdout));

    // Close the temporary file and restore stdout
    fclose(tempFile);
    dup2(original_stdout, fileno(stdout));

    // Open the temporary file for reading
    tempFile = fopen("temp.txt", "r");

    // Read the content of the temporary file
    char buffer[100] = {0}; // Clear the buffer
    size_t bytesRead = fread(buffer, 1, sizeof(buffer) - 1, tempFile); // Leave room for null terminator
    buffer[bytesRead] = '\0'; // Null-terminate the string

    // Close the temporary file
    fclose(tempFile);

    // Check the expected output
    TEST_ASSERT_EQUAL_STRING("2147483647-4560", buffer);
}