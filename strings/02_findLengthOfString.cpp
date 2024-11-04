#include <iostream>
using namespace std;

int main() {
    const char *s = "Welcome";  // Declare as const char* to avoid the warning
    int i;

    // First method - using a for loop
    for(i = 0; s[i] != '\0'; i++) {
        // Empty loop body, just incrementing `i` until the end of the string
    }
    printf("Length of the string is %d\n", i);

    // Second method - using a while loop
    int j = 0;
    while(s[j] != '\0') {
        j++;
    }
    cout << "Length is: " << j << endl;

    return 0;
}
