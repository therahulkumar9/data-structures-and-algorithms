#include <iostream>
using namespace std;

int main() {
    char A[] = "Python"; // Original string
    char B[7];
    int i, j = 0;

    // Calculate the length of string A
    for(i = 0; A[i] != '\0'; i++) {
        // Empty loop body
    }
    i--; // Decrement i to point to the last character

    // Reverse the string
    for(j = 0; i >= 0; i--, j++) {
        B[j] = A[i];
    }
    B[j] = '\0'; // Null terminate the reversed string

    cout << "Reversed string is: " << B << endl; // Output using cout

    return 0;
}
