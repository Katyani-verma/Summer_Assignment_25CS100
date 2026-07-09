// Q77: Write a program to Multiply matrices.
// #include <stdio.h>
// int main() {
//     int r1, c1, r2, c2;
//     printf("Enter rows and columns for first matrix: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter rows and columns for second matrix: ");
//     scanf("%d %d", &r2, &c2);
//     if (c1 != r2) {
//         printf("Matrix multiplication is not possible! Columns of Matrix A must equal Rows of Matrix B.\n");
//         return 0;
//     }
//     int A[r1][c1], B[r2][c2], product[r1][c2];
//     printf("Enter elements of Matrix A:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("Enter elements of Matrix B:\n");
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             product[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             for (int k = 0; k < c1; k++) {
//                 product[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     printf("Product Matrix:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             printf("%d\t", product[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q78: Write a program to Check symmetric matrix.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the size of the square matrix (N x N): ");
//     scanf("%d", &n);
//     int matrix[n][n];
//     int isSymmetric = 1;
//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (matrix[i][j] != matrix[j][i]) {
//                 isSymmetric = 0;
//                 break;
//             }
//         }
//     }
//     if (isSymmetric == 1) {
//         printf("The matrix is Symmetric.\n");
//     } else {
//         printf("The matrix is NOT Symmetric.\n");
//     }
//     return 0;
// }

// Q79: Write a program to Find row-wise sum.
// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter rows and columns: ");
//     scanf("%d %d", &rows, &cols);
//     int matrix[rows][cols];
//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("\nRow-wise Sums:\n");
//     for (int i = 0; i < rows; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < cols; j++) {
//             rowSum += matrix[i][j];
//         }
//         printf("Sum of Row %d = %d\n", i + 1, rowSum);
//     }
//     return 0;
// }

// Q80: Write a program to Find column-wise sum.
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nColumn-wise Sums:\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }
    return 0;
}