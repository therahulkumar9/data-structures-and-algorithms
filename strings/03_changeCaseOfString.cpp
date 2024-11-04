#include <iostream>
using namespace std;

int main() {

    char A[] = "WELCOME";
    int i;
    for(i = 0; A[i] != '\0'; i++) {
        A[i] += 32; // Convert uppercase to lowercase
    }
    
    printf("String after changing the case: %s\n", A);
    
    // Toggle case
    char B[] = "WELcome";
    int j = 0;
    while(B[j] != '\0') {
        if(B[j] >= 65 && B[j] <= 90) 
            B[j] += 32; // Convert uppercase to lowercase
        else if(B[j] >= 97 && B[j] <= 122) 
            B[j] -= 32; // Convert lowercase to uppercase
        j++; 
    }

    printf("String after toggling the case: %s\n", B);

    return 0;
}
