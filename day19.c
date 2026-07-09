// Q73: Write a program to Add matrices.
// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter rows and columns: ");
//     scanf("%d %d", &rows, &cols);
//     int A[rows][cols], B[rows][cols], sum[rows][cols];
//     printf("Enter elements of Matrix A:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("Enter elements of Matrix B:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             sum[i][j] = A[i][j] + B[i][j];
//         }
//     }
//     printf("Resultant Matrix (Addition):\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d\t", sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q74: Write a program to Subtract matrices.
// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter rows and columns: ");
//     scanf("%d %d", &rows, &cols);
//     int A[rows][cols], B[rows][cols], diff[rows][cols];
//     printf("Enter elements of Matrix A:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("Enter elements of Matrix B:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             diff[i][j] = A[i][j] - B[i][j];
//         }
//     }
//     printf("Resultant Matrix (Subtraction):\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d\t", diff[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q75: Write a program to Transpose matrix.
// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter rows and columns of the matrix: ");
//     scanf("%d %d", &rows, &cols);
//     int matrix[rows][cols], transpose[cols][rows];
//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     printf("Transpose of the Matrix:\n");
//     for (int i = 0; i < cols; i++) {
//         for (int j = 0; j < rows; j++) {
//             printf("%d\t", transpose[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q76: Write a program to Find diagonal sum
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);
    int matrix[n][n];
    int diagonalSum = 0;
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }
    printf("Sum of the primary diagonal: %d\n", diagonalSum);
    return 0;
}