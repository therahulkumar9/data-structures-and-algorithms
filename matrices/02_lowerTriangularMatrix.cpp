#include <iostream>
using namespace std;

class LowerTriangularMatrix {
private:
    int size; 
    int* elements;

public: 
    // Constructor with a parameter for matrix size
    LowerTriangularMatrix(int size) : size(size) {
        elements = new int[size * (size + 1) / 2];
    }

    // Set value at position (i, j)
    void setValue(int i, int j, int x);

    // Get value at position (i, j)
    int getValue(int i, int j);

    // Display the LowerTriangular matrix
    void display();

    // Destructor to free allocated memory
    ~LowerTriangularMatrix();
};

// Implementation of member functions
void LowerTriangularMatrix::setValue(int i, int j, int x) {
    if (i >= j) {
        elements[i * (i + 1) / 2 + (j - 1)] = x;
    }
}

int LowerTriangularMatrix::getValue(int i, int j){
    if (i >= j) {
        return elements[i * (i + 1) / 2 + (j - 1)];
    }
    return 0;
}

void LowerTriangularMatrix::display(){
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i >= j) {
                cout << elements[i * (i + 1) / 2 + (j - 1)] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

// Destructor to free allocated memory
LowerTriangularMatrix::~LowerTriangularMatrix() {
    delete[] elements;
}

int main() {
    int n;
    cout << "Enter Dimensions: ";
    cin >> n;

    LowerTriangularMatrix lowerTriMatrix(n); // Use meaningful variable name

    cout << "Enter all elements: ";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            lowerTriMatrix.setValue(i, j, x);
        }
    }

    cout << "Lower Triangular Matrix:" << endl;
    lowerTriMatrix.display(); // Display the matrix

    // Example of getting values from specific positions
    cout << "Value at (2, 2) is: " << lowerTriMatrix.getValue(2, 2) << endl;
    cout << "Value at (3, 2) is: " << lowerTriMatrix.getValue(3, 2) << endl;

    return 0;
}