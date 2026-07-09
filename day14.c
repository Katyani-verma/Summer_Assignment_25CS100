// Q53: Linear search
// #include <stdio.h>
// int main() {
//     int n, key, found = -1;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &key);
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             found = i;
//             break;
//         }
//     }
//     if (found != -1) {
//         printf("Element found at index: %d\n", found);
//     } else {
//         printf("Element not found in the array.\n");
//     }
//     return 0;
// }

// Q54: Frequency of an element
// #include <stdio.h>
// int main() {
//     int n, target, count = 0;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to find its frequency: ");
//     scanf("%d", &target);
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == target) {
//             count++;
//         }
//     }
//     printf("Frequency of %d is: %d\n", target, count);
//     return 0;
// }

// Q55: Second largest element
// #include <stdio.h>
// #include <limits.h>
// int main() {
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     if (n < 2) {
//         printf("Array must have at least 2 elements.\n");
//         return 0;
//     }
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int first = INT_MIN, second = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > first) {
//             second = first;
//             first = arr[i];
//         } else if (arr[i] > second && arr[i] != first) {
//             second = arr[i];
//         }
//     }
//     if (second == INT_MIN) {
//         printf("There is no second largest distinct element.\n");
//     } else {
//         printf("The second largest element is: %d\n", second);
//     }
//     return 0;
// }

// Q56: Find duplicates in array
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
    printf("Duplicate elements are: ");
    int hasDuplicates = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if (!alreadyPrinted) {
                    printf("%d ", arr[i]);
                    hasDuplicates = 1;
                }
                break;
            }
        }
    }
    if (!hasDuplicates) printf("None");
    printf("\n");
    return 0;
}