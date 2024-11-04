#include <iostream>
using namespace std;

int main() {
    char A[] = "How are you";
    int vcount = 0, ccount = 0;

    for(int i = 0; A[i] != '\0'; i++) {
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || 
           A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U') {
            vcount++;
        } else if((A[i] >= 'A' && A[i] <= 'Z') || (A[i] >= 'a' && A[i] <= 'z')) {
            ccount++;
        }
    }

    cout << "Total number of Vowels: " << vcount << endl;
    cout << "Total number of Consonants: " << ccount << endl;

    // Count Word
    int word = 0;
    for(int i = 0; A[i] != '\0'; i++){
        if(A[i] == ' ' && i > 0 && A[i-1] != ' '){
            word++;
        }
    }
    // If the string is non-empty, the word count is word + 1
    if (A[0] != '\0') {
        word++;
    }
    cout << "Total number of word in string A is: " << word << endl;
    return 0;
}
