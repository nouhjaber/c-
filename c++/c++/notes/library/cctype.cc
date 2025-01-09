#include <iostream>
#include <cctype> 

using namespace std; 

int main() {
    char ch;

    // isalpha(c) - Checks if character is alphabetic
    ch = 'A';
    // isalpha(c) returns true because 'A' is an alphabetic character (uppercase).
    isalpha(ch);

    ch = '1';
    // isalpha(c) returns false because '1' is not an alphabetic character, it's a digit.
    isalpha(ch);

    // isdigit(c) - Checks if character is a digit
    ch = '5';
    // isdigit(c) returns true because '5' is a digit.
    isdigit(ch);

    ch = 'A';
    // isdigit(c) returns false because 'A' is not a digit, it's a letter.
    isdigit(ch);

    // isalnum(c) - Checks if character is alphanumeric (either letter or digit)
    ch = '1';
    // isalnum(c) returns true because '1' is a digit, which is alphanumeric.
    isalnum(ch);

    ch = '#';
    // isalnum(c) returns false because '#' is neither a letter nor a digit.
    isalnum(ch);

    // islower(c) - Checks if character is lowercase
    ch = 'a';
    // islower(c) returns true because 'a' is a lowercase letter.
    islower(ch);

    ch = 'A';
    // islower(c) returns false because 'A' is an uppercase letter, not lowercase.
    islower(ch);

    // isupper(c) - Checks if character is uppercase
    ch = 'A';
    // isupper(c) returns true because 'A' is an uppercase letter.
    isupper(ch);

    ch = 'a';
    // isupper(c) returns false because 'a' is lowercase, not uppercase.
    isupper(ch);

    // isspace(c) - Checks if character is a whitespace character
    ch = ' ';
    // isspace(c) returns true because ' ' (space) is a whitespace character.
    isspace(ch);

    ch = 'a';
    // isspace(c) returns false because 'a' is not a whitespace character.
    isspace(ch);

    // ispunct(c) - Checks if character is punctuation
    ch = '!';
    // ispunct(c) returns true because '!' is a punctuation character.
    ispunct(ch);

    ch = 'A';
    // ispunct(c) returns false because 'A' is not punctuation, it's a letter.
    ispunct(ch);

    // tolower(c) - Converts character to lowercase
    ch = 'A';
    // tolower(c) returns 'a', converting 'A' to lowercase.
    tolower(ch);

    // toupper(c) - Converts character to uppercase
    ch = 'a';
    // toupper(c) returns 'A', converting 'a' to uppercase.
    toupper(ch);

    // iscntrl(c) - Checks if character is a control character
    ch = '\n';  // Newline character
    // iscntrl(c) returns true because '\n' is a control character.
    iscntrl(ch);

    ch = 'A';
    // iscntrl(c) returns false because 'A' is not a control character.
    iscntrl(ch);

    // isgraph(c) - Checks if character is a printable, non-whitespace character
    ch = '#';
    // isgraph(c) returns true because '#' is a printable character that is not a space.
    isgraph(ch);

    ch = ' ';
    // isgraph(c) returns false because ' ' is a whitespace, not a printable character.
    isgraph(ch);

    // isprint(c) - Checks if character is printable
    ch = 'A';
    // isprint(c) returns true because 'A' is a printable character.
    isprint(ch);

    ch = '\n';
    // isprint(c) returns false because '\n' is a control character, not printable.
    isprint(ch);

    // isxdigit(c) - Checks if character is a hexadecimal digit
    ch = 'F';
    // isxdigit(c) returns true because 'F' is a valid hexadecimal digit.
    isxdigit(ch);

    ch = 'G';
    // isxdigit(c) returns false because 'G' is not a valid hexadecimal digit (0-9, A-F).
    isxdigit(ch);

    // toascii(c) - Returns the ASCII value of character (ensures it's within 0-127 range)
    ch = 'A';
    // toascii(c) returns the ASCII value of 'A', which is 65.
    toascii(ch);

    return 0;
}
