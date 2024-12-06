#include <iostream> 
#include <string>    

using namespace std;  

int main() {
    // Creating an empty string
    string str1;  // This creates an empty string, meaning it has no characters and a size of 0.
    cout << "str1 is initially: \"" << str1 << "\"\n";  // Output will be empty, since str1 is an empty string.

    // Initializing a string with a literal
    string str2 = "Hello, world!";  // This initializes the string with a literal "Hello, world!".
    cout << "str2: " << str2 << "\n";  // Output will be "Hello, world!"

    // Using the constructor to create a string of repeated characters
    string str3(5, 'A');  // This creates a string of length 5, filled with the character 'A'.
    cout << "str3: " << str3 << "\n";  // Output will be "AAAAA"

    // Concatenating strings
    string str4 = str2 + " How are you?";  // This concatenates the string str2 with " How are you?" using the '+' operator.
    cout << "str4 (concatenation): " << str4 << "\n";  // Output will be "Hello, world! How are you?"

    // Getting the length of a string
    size_t length = str4.size();  // The .size() function returns the number of characters in str4.
    cout << "Length of str4: " << length << "\n";  // Output will be the number of characters in str4.

    // Accessing individual characters using indexing
    char first_char = str4[0];  // Accesses the first character (index 0) of str4.
    cout << "First character of str4: " << first_char << "\n";  // Output will be 'H' (first character of str4).

    // Modifying a string
    str4[0] = 'h';  // Modifies the first character (index 0) of str4 to 'h'.
    cout << "Modified str4: " << str4 << "\n";  // Output will be "hello, world! How are you?" after modification.

    // Using the append() function to add to the string
    str4.append(" I'm fine, thanks!");  // Appends " I'm fine, thanks!" to the end of str4.
    cout << "Appended str4: " << str4 << "\n";  // Output will be "hello, world! How are you? I'm fine, thanks!"

    // Substring extraction (extracting a portion of the string)
    string sub_str = str4.substr(7, 5);  // Extracts a substring starting from index 7 and of length 5.
    cout << "Substring (from index 7, length 5): " << sub_str << "\n";  // Output will be "world"

    // Finding a substring within a string using find()
    size_t position = str4.find("How");  // Finds the first occurrence of the substring "How" in str4.
    if (position != string::npos) {  // If "How" is found, position will not be equal to string::npos (special constant representing not found).
        cout << "'How' found at position: " << position << "\n";  // Outputs the position of "How" in str4.
    } else {
        cout << "'How' not found.\n";  // If "How" is not found, this will be printed.
    }

    // Comparing two strings
    if (str2 == str4) {  // Compares str2 with str4 using the equality operator.
        cout << "str2 and str4 are equal.\n";
    } else {
        cout << "str2 and str4 are not equal.\n";  // This will output because str2 and str4 are different.
    }

    // Converting a string to an integer
    string number_str = "12345";  // A string representing an integer value.
    int number = stoi(number_str);  // The stoi() function converts the string to an integer (string to integer).
    cout << "Converted number: " << number << "\n";  // Output will be 12345, as the string "12345" is converted to an integer.

    // Converting a number to a string
    int num = 6789;  // An integer value.
    string num_str = to_string(num);  // The to_string() function converts the integer to a string.
    cout << "Number as string: " << num_str << "\n";  // Output will be "6789" (converted to a string).

    // Clearing a string (emptying it)
    str4.clear();  // Clears all content from str4, making it an empty string.
    cout << "str4 after clear(): \"" << str4 << "\"\n";  // Output will be empty since the string was cleared.

    // Checking if the string is empty
    if (str4.empty()) {  // Checks if the string is empty.
        cout << "str4 is now empty.\n";  // This will output since str4 is empty after clear().
    }

    // Using c_str() to get a C-style string (char array)
    const char* cstr = str2.c_str();  // Converts str2 to a C-style string (const char*), which is null-terminated.
    cout << "C-style string: " << cstr << endl;  // Output will be "Hello, world!" (C-style string).

    // Using compare() to compare strings lexicographically
    string str5 = "apple";  // A string to compare.
    string str6 = "banana";  // Another string to compare.
    int cmp_result = str5.compare(str6);  // Compares str5 with str6 lexicographically.
    cout << "Comparison result (str5 vs str6): " << cmp_result << endl;  // Output will be negative since "apple" < "banana".

    // Resizing a string (change its length)
    str5.resize(10, 'X');  // Resizes str5 to a length of 10, padding with 'X' characters.
    cout << "Resized str5: " << str5 << endl;  // Output will be "appleXXXXX", as the string is resized to 10 characters.

    // Swapping two strings
    str5.swap(str6);  // Swaps the contents of str5 and str6.
    cout << "After swap - str5: " << str5 << ", str6: " << str6 << endl;  // Output will be "banana" and "apple".

    // Inserting into a string at a specific position
    str2.insert(7, "beautiful ");  // Inserts "beautiful " into str2 at index 7.
    cout << "str2 after insert: " << str2 << endl;  // Output will be "Hello, beautiful world!" (inserted word).

    // Erasing part of a string
    str2.erase(5, 7);  // Removes 7 characters from str2 starting at index 5.
    cout << "str2 after erase: " << str2 << endl;  // Output will be "Hello!" (erased "beautiful").

    // Finding first and last occurrences of a character
    size_t first_vowel = str2.find_first_of("aeiou");  // Finds the first vowel in str2.
    size_t last_vowel = str2.find_last_of("aeiou");   // Finds the last vowel in str2.
    cout << "First vowel at position: " << first_vowel << endl;  // Output will be the index of the first vowel.
    cout << "Last vowel at position: " << last_vowel << endl;    // Output will be the index of the last vowel.

    // Using iterators to traverse a string
    cout << "Characters in str2: ";
    for (auto it = str2.begin(); it != str2.end(); ++it) {
        cout << *it << " ";  // Outputs each character in str2 using an iterator.
    }
    cout << endl;

    // Push back and pop back operations
    str2.push_back('!');  // Adds the character '!' to the end of str2.
    cout << "str2 after push_back: " << str2 << endl;  // Output will be "Hello!!" (added '!' at the end).
    str2.pop_back();  // Removes the last character (the '!' we just added).
    cout << "str2 after pop_back: " << str2 << endl;  // Output will be "Hello!" (removed the last '!').

    return 0;  
}
