#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int a = 10; // Declare an integer variable 'a' and initialize it to 10

    // Pointer declaration and usage
    int *p;    // Pointer 'p' to an integer
    p = &a;     // Assign the address of 'a' to the pointer 'p'

    // Print the value of 'a' directly
    cout << "Value of a: " << a << endl;  // Direct output using 'cout'

    // Print the value of 'a' using the pointer 'p' and the address of 'a'
    // *p means dereferencing the pointer to get the value at the address stored in 'p'
    // &a means the address of the variable 'a'
    printf("Printing the value of a using pointer p: %d and the address of a: %p\n", *p, (void*)&a); // The %p specifier is designed to print a pointer (memory address).
    // %p Requires void*

    return 0; 
}
