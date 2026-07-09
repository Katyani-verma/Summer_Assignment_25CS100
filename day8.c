// Q29: Print Half Pyramid Pattern
// #include <stdio.h>

// int main() {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
    
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

// Q30: Print Number Triangle
// #include <stdio.h>
// int main() {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d", j);
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

// Q31: Print Character Triangle (A, AB, ABC...)
// #include <stdio.h>
// int main() {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 0; j < i; j++) {
//             // 'A' ki ASCII value mein j add karne se A, B, C... print hoga
//             printf("%c", 'A' + j);
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

// Q32: Print Repeated-Number Pattern (1, 22, 333...)
#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Har row mein usi row ka number (i) repeat hoga
            printf("%d", i);
        }
        printf("\n"); 
    }
    return 0;
}