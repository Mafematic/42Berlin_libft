#include "../Unity/src/unity.h"
#include "test_libft.h"
#include "libft.h"

void test_ft_putnbr_fd(void)
{
    // Redirect stdout to a temporary file
    FILE *tempFile = fopen("temp.txt", "w");
    int original_stdout = dup(fileno(stdout));
    dup2(fileno(tempFile), fileno(stdout));

    // Call ft_putnbr_fd with different input values and file descriptor
    ft_putnbr_fd(123, fileno(stdout));
    ft_putnbr_fd(-456, fileno(stdout));
    ft_putnbr_fd(0, fileno(stdout));

    // Close the temporary file and restore stdout
    fclose(tempFile);
    dup2(original_stdout, fileno(stdout));

    // Open the temporary file for reading
    tempFile = fopen("temp.txt", "r");

    // Read the content of the temporary file
    char buffer[100];
    fgets(buffer, sizeof(buffer), tempFile);
    fgets(buffer + strlen(buffer), sizeof(buffer) - strlen(buffer), tempFile);
    fgets(buffer + strlen(buffer), sizeof(buffer) - strlen(buffer), tempFile);

    // Close the temporary file
    fclose(tempFile);

    // Check the expected output
    TEST_ASSERT_EQUAL_STRING("123\n-456\n0\n", buffer);
}