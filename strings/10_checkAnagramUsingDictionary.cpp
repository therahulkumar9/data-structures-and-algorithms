#include <iostream>
using namespace std;

int main() {
    char A[] = "decimal";
    char B[] = "medical";
    int H[26] = {0}; // Frequency array for letters a-z
    bool anagram = true;

    // Count frequency of each character in string A
    for (int i = 0; A[i] != '\0'; i++) {
        H[A[i] - 'a']++;
    }

    // Decrease frequency for each character in string B
    for (int i = 0; B[i] != '\0'; i++) {
        H[B[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (H[i] != 0) { // If any count is not zero, they are not anagrams
            anagram = false;
            break;
        }
    }

    // Output result
    if (anagram) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }

    return 0;
}