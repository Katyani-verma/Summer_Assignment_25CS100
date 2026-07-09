// Q57: Reverse array
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int start = 0, end = n - 1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Q58: Rotate array left (by d positions)
// #include <stdio.h>
// int main() {
//     int n, d;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter number of positions to left rotate: ");
//     scanf("%d", &d);
//     d = d % n; 
//     int temp[d];
//     for (int i = 0; i < d; i++) {
//         temp[i] = arr[i];
//     }
//     for (int i = d; i < n; i++) {
//         arr[i - d] = arr[i];
//     }
//     for (int i = 0; i < d; i++) {
//         arr[n - d + i] = temp[i];
//     }
//     printf("Left rotated array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Q59: Rotate array right (by d positions)
// #include <stdio.h>
// int main() {
//     int n, d;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter number of positions to right rotate: ");
//     scanf("%d", &d);
//     d = d % n;
//     int temp[d];
//     for (int i = 0; i < d; i++) {
//         temp[i] = arr[n - d + i];
//     }
//     for (int i = n - 1; i >= d; i--) {
//         arr[i] = arr[i - d];
//     }
//     for (int i = 0; i < d; i++) {
//         arr[i] = temp[i];
//     }
//     printf("Right rotated array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Q60: Move zeroes to end
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}