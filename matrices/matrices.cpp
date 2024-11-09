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

*/