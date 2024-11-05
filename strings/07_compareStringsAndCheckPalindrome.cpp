#include <iostream>
using namespace std;

void checkPalindrome(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    i--;
    int j = 0;
    while(j < i){
        if(str[i] != str[j]){
            cout << "String is not a palindrome"<< endl;
            return;
        }
        i--;
        j++;
    }
    cout << "String is a palindrome" << endl; // If all characters match
}
int main() {
    // Comparing strings
    char A[] = "Painter";
    char B[] = "Painting";
    int i, j;

    for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++) {
        if(A[i] != B[j]) {
            break;
        }
    }

    if(A[i] == B[j]) 
        cout << "Equal" << endl;
    else if(A[i] < B[j]) 
        cout << "Smaller" << endl;
    else 
        cout << "Greater" << endl;
    
    char str[] = "madam";
    checkPalindrome(str);
    return 0;
}
