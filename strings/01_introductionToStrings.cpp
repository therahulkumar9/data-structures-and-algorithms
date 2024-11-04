#include <iostream>
using namespace std;

/* 
ASCII Code:
A - 65    a - 97    0 - 48
B - 66    b - 98    1 - 49 
C - 67    c - 99    2 - 50
...
Z - 90    z - 122   9 - 57

Additional Information:
ANSI - American National Standards Institute
Unicode takes 2 bytes
Spacebar - 32
Escape (esc) - 27
Backspace - 8
Dollar sign ($) - 36
Asterisk (*) - 42
*/

int main() {
    char temp = 'A';
    
    // The following lines are commented out because they are incorrect:
    // temp = 'AB'; // Incorrect: a char can only hold a single character
    // temp = A; // Incorrect: A should be in quotes as a character literal
    // temp = "A"; // Incorrect: "A" is a string literal, not a char

    printf("%c\n", temp); // It will print A
    printf("%d\n", temp); // It will print 65 (ASCII value of 'A')
    cout << temp << endl; // Print using cout

    // Character array initialization
    char X[5] = {'A', 'B', 'C', 'D', 'E'}; // Initialization + declaration
    char Y[] = {'A', 'B', 'C', 'D', 'E'}; // Size inferred from initializer
    char Z[] = {65, 66, 67, 68, 69}; // ASCII values corresponding to A, B, C, D, E
    char W[5] = {'A', 'B'}; // Remaining elements initialized to zero

    // '\0' is called the null character, string terminator, or end of string character.
    char name[10] = {'J', 'o', 'h', 'n', '\0'}; // Explicitly null-terminated string

    // The following declarations are incorrect due to redeclaration:
    // char name[] = {'J', 'o', 'h', 'n', '\0'}; // This would cause an error due to redeclaration.
    
    char name2[] = "John"; // Automatically includes '\0'
    
    const char *n = "John"; // Pointer to a string literal in read-only memory

    printf("%s\n", name); // Print string until '\0'
    
    cout << "Enter your name: ";
    cin >> name; // Read and store input into name (note: this will stop at whitespace)
    
    cout << name << endl; // Output the entered name

    return 0;
}