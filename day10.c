// Q37: Star Pyramid
// #include <stdio.h>
// int main() {
//     int i, j, rows = 5;
//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
//         // 2. Print stars
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q38: Reverse Pyramid
// #include <stdio.h>
// int main() {
//     int i, j, rows = 5;
//     for (i = rows; i >= 1; i--) {
//         for (j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q39: Number Pyramid (Palindrome)
// #include <stdio.h>
// int main() {
//     int i, j, rows = 5;
//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {
//             printf("%d", j);
//         }
//         for (j = i - 1; j >= 1; j--) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q40: Character Pyramid (Palindrome)
#include <stdio.h>
int main() {
    int i, j, rows = 5;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}