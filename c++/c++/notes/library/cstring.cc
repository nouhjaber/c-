#include <cstring>

int main() {
    // Initialize two C-style strings (character arrays)
    const char* str1 = "Hello, World!";
    const char* str2 = "Hello, C++!";

    // 1. Using strlen to find the length of a string
    size_t length = strlen(str1);

    // 2. Using strcmp to compare two strings lexicographically
    int cmp_result = strcmp(str1, str2);

    // 3. Using strcpy to copy str1 to a new string
    char str3[50];  // Make sure the destination has enough space
    strcpy(str3, str1);

    // 4. Using strcat to concatenate two strings
    char str4[50] = "Hello, ";
    strcat(str4, "C++!");

    // 5. Using strchr to find the first occurrence of a character
    char* first_occurrence = strchr(str1, 'o');

    // 6. Using strstr to find a substring in a string
    char* substring = strstr(str1, "World");

    // 7. Using memcpy to copy memory blocks
    char str5[50];
    memcpy(str5, str1, strlen(str1) + 1);  // +1 to include the null terminator

    // 8. Using memset to fill a memory block with a specific value
    char str6[50] = "Some random text";
    memset(str6, '*', 5);  // Set the first 5 characters to '*'

    // 9. Using strtok to tokenize a string by delimiters
    char str7[] = "apple,banana,grape";
    char* token = strtok(str7, ",");
    while (token != nullptr) {
        // This is where token processing would occur
        // We would normally print or use the token in some way
        token = strtok(nullptr, ",");  // Continue tokenizing
    }

    return 0;  // Return statement for main
}
