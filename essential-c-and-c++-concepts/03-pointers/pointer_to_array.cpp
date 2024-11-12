#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    // Declare and initialize an array of integers. The array is stored on the stack.
    int A[5] = {2, 4, 6, 8, 10};

    int *p;  // Declare a pointer to an integer
    p = A;   // Pointer 'p' now points to the start of the array 'A'

    // The name of the array 'A' is actually a pointer to the first element, so we don't need the '&'
    // Equivalent to: p = &A[0]; (p points to the first element of A)

    // The following would be incorrect because *A does not give the address of the first element,
    // but instead dereferences the first element, so it's not valid for assigning to a pointer:
    // p = *A; // Incorrect: *A is 2, not the address of A[0]

    // Loop through the array and print each element using both direct array indexing and pointer dereferencing
    for (int i = 0; i < 5; i++) {
        cout << "Array element: " << A[i]          // Accessing array directly
             << " Using pointers: " << p[i]       // Accessing array via pointer 'p'
             << endl;
    }

    return 0;
}
