#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define a string to find duplicate characters
    string A;
    cout << "Enter a string: ";
    getline(cin, A);

    
    int H[26] = {0};

    for (char c : A) {
        if (c >= 'a' && c <= 'z') {
            H[c - 'a'] += 1; 
        }
    }

    cout << "Duplicate characters:\n";
    bool found = false; 
    for (int i = 0; i < 26; i++) {
        if (H[i] > 1) {
            cout << static_cast<char>(i + 'a') << " appears " << H[i] << " times\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No duplicate characters found.\n";
    }

    return 0;
}