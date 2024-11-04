#include <iostream>
using namespace std;

int validate(const char *name) { // Use const char* for read-only strings
    for (int i = 0; name[i] != '\0'; i++) {
        // Check if the character is not an uppercase letter, lowercase letter, or digit
        if (!(name[i] >= 'A' && name[i] <= 'Z') && 
            !(name[i] >= 'a' && name[i] <= 'z') && 
            !(name[i] >= '0' && name[i] <= '9')) {
            return 0; // Invalid character found
        }
    }
    return 1; // All characters are valid
}

int main() {
    const char *name = "Anil1234"; // Use const char* to avoid modifying string literal
    if (validate(name)) {
        cout << "Valid String" << endl;
    } else {
        cout << "Invalid String" << endl;
    }
    return 0;
}
