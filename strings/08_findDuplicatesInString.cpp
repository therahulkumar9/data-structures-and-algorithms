#include <iostream>
using namespace std;

int main() {

    // Define a lowercase string to find duplicate characters
    char A[] = "finding";
    
    // Array to store the frequency of each letter in the alphabet
    // Assuming only lowercase letters ('a' to 'z'), hence size 26
    int H[26] = {0}, i;
    
    // Populate frequency array for each character in string `A`
    for(i = 0; A[i] != '\0'; i++) {
        // Increment count of each character by mapping 'a' to 0, 'b' to 1, etc.
        H[A[i] - 97] += 1;
    }

    // Print characters that appear more than once
    for(i = 0; i < 26; i++) {
        if(H[i] > 1) {
            printf("%c ", i + 97); // Convert index back to character by adding 97 (ASCII for 'a')
            printf("appears %d times\n", H[i]);
        }
    }

    return 0;
}
