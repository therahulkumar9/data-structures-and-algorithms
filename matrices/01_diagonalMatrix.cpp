// C++ class for Diagonal Matrix
#include <iostream>
using namespace std;

class Diagonal {
private:
    int size; 
    int* elements;

public: 
    // Constructor with a parameter for matrix size
    Diagonal(int size) {
        this->size = size;
        elements = new int[size];
        for (int i = 0; i < size; i++) {
            elements[i] = 0; // Initialize diagonal elements to zero
        }
    }

    // Set value at position (i, j)
    void setValue(int i, int j, int x);

    // Get value at position (i, j)
    int getValue(int i, int j);

    // Display the diagonal matrix
    void display();

    // Destructor to free allocated memory
    ~Diagonal();
};

// Implementation of member functions
void Diagonal::setValue(int i, int j, int x) {
    if (i == j && i < size) { // Ensure 'i' is within bounds
        elements[i] = x;
    }
}

int Diagonal::getValue(int i, int j) {
    if (i == j && i < size) { // Ensure 'i' is within bounds
        return elements[i];
    }
    return 0; // Non-diagonal positions return 0
}

void Diagonal::display() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                cout << elements[i] << " "; // Print diagonal element
            } else {
                cout << "0 "; // Print zero for non-diagonal positions
            }
        }
        cout << endl;
    }
}

// Destructor to free allocated memory
Diagonal::~Diagonal() {
    delete[] elements;
}

int main() {
    int n = 4; 
    Diagonal d(n); // Create a Diagonal object with specified size

    d.setValue(0, 0, 5); // Set value at (0, 0)
    d.setValue(1, 1, 10); // Set value at (1, 1)
    d.setValue(2, 2, 15); // Set value at (2, 2)
    d.setValue(3, 3, 20); // Set value at (3, 3)

    cout << "Diagonal Matrix:" << endl;
    d.display(); // Display the matrix

    // value at (2, 2) and (3, 2)
    cout << "Value at (2, 2) is: " << d.getValue(2, 2) << endl;
    cout << "Value at (3, 2) is: " << d.getValue(3, 2) << endl;

    return 0;
}