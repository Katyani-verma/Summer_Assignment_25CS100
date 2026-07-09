// Q33: Reverse Star Pattern
// #include <stdio.h>
// int main() {
//     int i, j;
//     for(i = 5; i >= 1; i--) {
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n"); 
//     }
//     return 0;
// }

// Q34: Reverse Number Triangle
// #include <stdio.h>
// int main() {
//     int i, j;
//     for(i = 5; i >= 1; i--) {
//         for(j = 1; j <= i; j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q35: Repeated Character Pattern
// #include <stdio.h>
// int main() {
//     int i, j;
//     for(i = 1; i <= 5; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("%c", 'A' + i - 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Q36: Hollow Square Pattern
#include <stdio.h>
int main() {
    int i, j;
    int size = 5;
    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {
            if(i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }
    return 0;
}