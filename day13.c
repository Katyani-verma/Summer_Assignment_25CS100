// Q49: Input and display array
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
//     printf("The array elements are: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Q50: Find sum and average of array
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     float average = (float)sum / n;
//     printf("Sum = %d\n", sum);
//     printf("Average = %.2f\n", average);
//     return 0;
// }

// Q51: Find largest and smallest element
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
//     int largest = arr[0];
//     int smallest = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > largest) largest = arr[i];
//         if (arr[i] < smallest) smallest = arr[i];
//     }
//     printf("Largest element = %d\n", largest);
//     printf("Smallest element = %d\n", smallest);
//     return 0;
// }

// Q52: Count even and odd elements
#include <stdio.h>
int main() {
    int n, evenCount = 0, oddCount = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Total Even elements = %d\n", evenCount);
    printf("Total Odd elements = %d\n", oddCount);
    return 0;
}
