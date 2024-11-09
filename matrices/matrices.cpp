#include <iostream>
using namespace std;

/*
    Matrix Theory in C++

    A matrix is a two-dimensional array consisting of rows and columns. 
    It is a fundamental data structure used in various fields such as 
    mathematics, computer graphics, and data processing. This comment 
    will cover the theory of matrices, their representations, operations, 
    and applications in C++.

    **1. Definition of a Matrix:**
    A matrix is defined as a rectangular array of numbers arranged in 
    rows and columns. The size of a matrix is given by its number of rows 
    (m) and columns (n), denoted as an m x n matrix.

    **2. Representation in C++:**
    In C++, a matrix can be represented using a two-dimensional array. 
    For example:
    
    ```cpp
    int matrix[3][4]; // A 3x4 matrix (3 rows and 4 columns)
    ```

    **3. Basic Operations on Matrices:**
    - **Addition:** Two matrices of the same size can be added together by 
      adding their corresponding elements.
      
      Example:
      ```cpp
      for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
              result[i][j] = matrix1[i][j] + matrix2[i][j];
          }
      }
      ```

    - **Subtraction:** Similar to addition, subtraction involves 
      subtracting corresponding elements.
      
      Example:
      ```cpp
      for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
              result[i][j] = matrix1[i][j] - matrix2[i][j];
          }
      }
      ```

    - **Multiplication:** Matrix multiplication is more complex. The number 
      of columns in the first matrix must equal the number of rows in the 
      second matrix.
      
      Example:
      ```cpp
      for (int i = 0; i < m; i++) {
          for (int j = 0; j < p; j++) {
              result[i][j] = 0;
              for (int k = 0; k < n; k++) {
                  result[i][j] += matrix1[i][k] * matrix2[k][j];
              }
          }
      }
      ```

    - **Transposition:** The transpose of a matrix is obtained by swapping 
      its rows with its columns.
      
      Example:
      ```cpp
      for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
              transpose[j][i] = matrix[i][j];
          }
      }
      ```

    **4. Applications of Matrices:**
    - **Mathematics:** Used in solving systems of linear equations, 
      transformations, and more.
    - **Computer Graphics:** Used to perform transformations such as 
      translation, rotation, and scaling of images.
    - **Data Processing:** Utilized in machine learning algorithms and data 
      representation.

    **5. Conclusion:**
    Understanding matrices and their operations is crucial for various 
    applications in computer science and engineering. C++ provides a robust 
    framework to implement these concepts efficiently using arrays.

    **6. Special Matrices: **
    -  Diagonal Matrix
    - Lower Triangular Matrix
    - Upper Triangular Matrix
    - Symmetric Matrix
    - Tridiagonal Matrix
    - Band Matrix
    - Toeplitz Matrix
    - Sparse Matrix
*/


/*
    Special Matrices in C++

    Special matrices have unique properties that can be leveraged in various applications. 
    Below are some common types of special matrices along with their definitions and 
    example C++ implementations.

    **1. Diagonal Matrix**
    A diagonal matrix is a square matrix where all elements outside the main diagonal are zero.

    Example:
    ```cpp
    int diagonalMatrix[3][3] = {
        {1, 0, 0},
        {0, 2, 0},
        {0, 0, 3}
    };
    ```

    **2. Scalar Matrix**
    A scalar matrix is a diagonal matrix where all the diagonal elements are the same.

    Example:
    ```cpp
    int scalarMatrix[3][3] = {
        {5, 0, 0},
        {0, 5, 0},
        {0, 0, 5}
    };
    ```

    **3. Identity Matrix**
    An identity matrix is a square matrix with ones on the diagonal and zeros elsewhere.

    Example:
    ```cpp
    int identityMatrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    ```

    **4. Zero Matrix**
    A zero matrix contains all elements as zero.

    Example:
    ```cpp
    int zeroMatrix[2][2] = {
        {0, 0},
        {0, 0}
    };
    ```

    **5. Symmetric Matrix**
    A symmetric matrix is equal to its transpose.

    Example:
    ```cpp
    int symmetricMatrix[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };
    
    // Check if symmetric
    bool isSymmetric = true;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (symmetricMatrix[i][j] != symmetricMatrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }
    ```

    **6. Skew-Symmetric Matrix**
    A skew-symmetric matrix satisfies \(A^T = -A\).

    Example:
    ```cpp
    int skewSymmetricMatrix[3][3] = {
        {0, -2, -3},
        {2, 0, -6},
        {3, 6, 0}
    };
    
   // Check if skew-symmetric
   bool isSkewSymmetric = true;
   for (int i = 0; i < 3; i++) {
       for (int j = i + 1; j < 3; j++) {
           if (skewSymmetricMatrix[i][j] != -skewSymmetricMatrix[j][i]) {
               isSkewSymmetric = false;
               break;
           }
       }
   }

*/

    int main(){
    
        int upperTriangularMatrix[3][3] = {
        {1, 2, 3},
        {0, 5, 6},
        {0, 0, 9}
    };
    
    
    int lowerTriangularMatrix[3][3] = {
        {1, 0, 0},
        {2, 5, 0},
        {3, 6, 9}
    };
    
    int sparseMatrix[4][4] = {
        {1, 0, 0, 2},
        {0, 0, 0, 0},
        {3, 4, 0, 5},
        {0, 0, 6, 7}
    };
    
    int nonZeroCount = 0;
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (sparseMatrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }
    
    bool isSparse = (nonZeroCount < (4 * 4) / 2); // More than half are zeros
    cout << "All done";
    return 0;
}