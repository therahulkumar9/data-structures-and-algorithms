#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    /*
     * Initialize an array A with predefined constant values.
     * The remaining elements will default to 0.
     */
    int A[10] = {2, 4, 6, 8, 10, 12}; // Size is 10, with remaining elements initialized to 0.

    // Display the size of a single element and the entire array
    cout << "Size of an element in array A: " << sizeof(A[0]) << " bytes" << endl; // Typically 4 bytes
    cout << "Size of Array A is: " << sizeof(A) << " bytes" << endl;  // Total size: 40 bytes (10 * 4)
    
    // Display specific elements of the array
    cout << "Third element (A[2]): " << A[2] << endl; 
    printf("Fourth element (A[3]): %d\n", A[3]);

    // Loop through the array and print all elements
    cout << "Elements of Array A:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "A[" << i << "] = " << A[i] << endl; // Display each element with its index
    }
    
    // Alternative method to access array using a range-based for loop
    cout << "Accessing array using range-based for loop:" << endl;
    for (int x : A) {
        cout << x << endl;
    }
    
    return 0;
}