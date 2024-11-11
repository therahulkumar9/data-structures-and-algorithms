#include <iostream>
using namespace std;

int main() {
    // Take size of an array as an input 
    int n;
    cout << "Enter Size: ";
    cin >> n;

    // Variable sized Arrays
    int A[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter value at index " << i << ": ";
        cin >> A[i];
    }

    cout << "Size of Array A is: " << sizeof(A) << " bytes" << endl; // size is equal to n * 4 bytes (size of int)

    cout << "Elements of Array A:" << endl;
    for (int x : A) {
        cout << x << endl;
    }

    // Another variable-sized array
    int m;
    cout << "Enter the size of B: ";
    cin >> m;
    
    int B[m] = {2, 3, 4}; // Initialize with predefined values

    cout << "Elements of Array B:" << endl;
    for (int x : B) {
        cout << x << endl;
    }

    return 0;
}