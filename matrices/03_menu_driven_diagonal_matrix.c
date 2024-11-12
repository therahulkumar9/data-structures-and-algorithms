#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc

int main() {
    int *A, n, choice, x, i, j;

    // Get the dimension of the matrix
    printf("Enter dimension: ");
    scanf("%d", &n);

    // Allocate memory for the matrix (assuming a diagonal matrix)
    A = (int *)malloc(n * sizeof(int));

    do {
        // Display Menu
        printf("\nMenu:\n");
        printf("1. Input elements\n");
        printf("2. Get element at index\n");
        printf("3. Set element at index\n");
        printf("4. Display matrix\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++) { // Use 0-based indexing
                    scanf("%d", &A[i]);
                }
                break;

            case 2:
                printf("Enter indices (i j): ");
                scanf("%d %d", &i, &j);
                if (i >= 1 && i <= n && j >= 1 && j <= n) { // Check bounds
                    if (i == j) {
                        printf("Element at (%d, %d): %d\n", i, j, A[i - 1]);
                    } else {
                        printf("Element at (%d, %d): 0\n", i, j);
                    }
                } else {
                    printf("Indices out of bounds.\n");
                }
                break;

            case 3:
                printf("Enter row, col and element: ");
                scanf("%d %d %d", &i, &j, &x);
                if (i >= 1 && i <= n && j >= 1 && j <= n) { // Check bounds
                    if (i == j) {
                        A[i - 1] = x; // Store value at diagonal position
                    } else {
                        printf("Only diagonal elements can be set.\n");
                    }
                } else {
                    printf("Indices out of bounds.\n");
                }
                break;

            case 4:
                printf("Matrix:\n");
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        if (i == j) {
                            printf("%d ", A[i - 1]); // Print diagonal element
                        } else {
                            printf("0 "); // Print zero for non-diagonal elements
                        }
                    }
                    printf("\n"); // New line after each row
                }
                break;

            case 0:
                break; // Exit the loop

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    free(A); // Free allocated memory
    return 0;
}