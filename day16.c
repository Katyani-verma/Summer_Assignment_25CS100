// Q61: Find Missing Number in an Array
// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter total number of elements (n): ");
//     scanf("%d", &n);
//     int size = n - 1;
//     int arr[size];
//     printf("Enter %d elements: ", size);
//     int actual_sum = 0;
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//         actual_sum += arr[i];
//     }
//     int total_sum = n * (n + 1) / 2;
//     int missing_number = total_sum - actual_sum;
    
//     printf("Missing Number: %d\n", missing_number);
//     return 0;
// }

// Q62: Find Maximum Frequency Element
// #include <stdio.h>
// int main() {
//     int size;
//     printf("Enter size of the array: ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int max_count = 0;
//     int max_element = arr[0];
//     for (int i = 0; i < size; i++) {
//         int count = 0;
//         for (int j = 0; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count > max_count) {
//             max_count = count;
//             max_element = arr[i];
//         }
//     }
//     printf("Element with max frequency: %d (appears %d times)\n", max_element, max_count);
//     return 0;
// }

// Q63: Find Pair with Given Sum
// #include <stdio.h>
// int main() {
//     int size, target, found = 0;
//     printf("Enter size of the array: ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter target sum: ");
//     scanf("%d", &target);
//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] + arr[j] == target) {
//                 printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
//                 found = 1;
//                 return 0;
//             }
//         }
//     }
//     if (!found) {
//         printf("No pair found with the given sum.\n");
//     }
//     return 0;
// }

// Q64: Remove Duplicates from Array
#include <stdio.h>
int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size], result[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int k = 0; 
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[k] = arr[i];
            k++;
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}