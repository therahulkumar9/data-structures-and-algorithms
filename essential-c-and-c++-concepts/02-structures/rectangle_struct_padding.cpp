#include <iostream>
using namespace std;

// Definition of a struct Rectangle with padding for memory alignment
struct Rectangle {
    int length;   // 4 bytes for the integer
    int breadth;  // 4 bytes for the integer
    char x;       // 1 byte for the char (used here for padding)
    
    // Padding is used here to align the struct to a 4-byte boundary
    // This improves memory access efficiency, as processors typically fetch
    // data in blocks of 4 bytes, making the struct's size 12 bytes (4 bytes * 3).
    // Even though we use only 9 bytes (4 + 4 + 1), the compiler adds 3 extra bytes
    // for alignment, making the total size of the struct 12 bytes.
};

int main() {
    // Initialize the Rectangle struct with values for length and breadth
    Rectangle r1 = {24, 30};  // Direct initialization of r1

    // Display the size of the struct, which includes padding
    cout << "Size of r1: " << sizeof(r1) << " bytes" << endl;  // Should output 12 bytes due to padding

    // Output the length and breadth of the rectangle
    cout << "Length: " << r1.length << endl;
    cout << "Breadth: " << r1.breadth << endl;

    // After changing the length

    r1.length = 35;
    r1.breadth = 50;

    cout << "Length: " << r1.length << endl;
    cout << "Breadth: " << r1.breadth << endl;

    return 0;
}
