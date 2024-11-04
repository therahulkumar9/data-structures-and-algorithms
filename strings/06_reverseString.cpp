#include <iostream>
using namespace std;

// Second method of reverse a string

    void reverseString(char str[]){
        int i, j;
        for(i = 0; str[i] != '\0'; i++){
            // Empty
        }

        i--;
        for(j=0; j < i; j++, i--){
            char temp;
            temp = str[i];
            str[i] = str[j];
            str[j] = temp; 
        }

        cout << "Now string is: " << str << endl;
    }

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

    char C[] = "Rahul Kumar";
    reverseString(C);
    return 0;
}
