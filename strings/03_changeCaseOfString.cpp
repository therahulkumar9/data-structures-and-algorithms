#include <iostream>
using namespace std;

int main() {

    char A[] = "WELCOME";
    int i;
    for(i = 0; A[i] != '\0'; i++) {
        A[i] += 32; // Convert uppercase to lowercase
    }
    
    printf("String after changing the case: %s\n", A);


    return 0;
}
