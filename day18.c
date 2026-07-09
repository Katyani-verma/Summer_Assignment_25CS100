// Q69: Write a program to Bubble sort.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     int arr[n]; 
//     printf("%d Enter the elements of array:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("\nSorted Array (Ascending Order):\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Q70: Write a program to Selection sort.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
//     printf("Sorted array:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Q71: Write a program to Binary search.
// #include <stdio.h>
// int main() {
//     int n, target;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements in SORTED order:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &target);
//     int low = 0, high = n - 1, result = -1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target) {
//             result = mid;
//             break;
//         }
//         if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     if (result != -1) {
//         printf("Element found at index %d\n", result);
//     } else {
//         printf("Element not found\n");
//     }
//     return 0;
// }

// Q72: Write a program to Sort array in descending order.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in Descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}