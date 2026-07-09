// Q65: Merge Arrays
// #include <stdio.h>
// int main() {
//     int size1, size2;
//     printf("Enter size of first array: ");
//     scanf("%d", &size1);
//     int arr1[size1];
//     printf("Enter %d elements for first array: ", size1);
//     for (int i = 0; i < size1; i++) scanf("%d", &arr1[i]);
//     printf("Enter size of second array: ");
//     scanf("%d", &size2);
//     int arr2[size2];
//     printf("Enter %d elements for second array: ", size2);
//     for (int i = 0; i < size2; i++) scanf("%d", &arr2[i]);
//     int merged[size1 + size2];
//     int k = 0;
//     for (int i = 0; i < size1; i++) merged[k++] = arr1[i];
//     for (int i = 0; i < size2; i++) merged[k++] = arr2[i];
//     printf("Merged Array: ");
//     for (int i = 0; i < size1 + size2; i++) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Q66: Union of Arrays
// #include <stdio.h>
// int main() {
//     int size1, size2;
//     printf("Enter size of first array: ");
//     scanf("%d", &size1);
//     int arr1[size1];
//     printf("Enter elements of first array: ");
//     for (int i = 0; i < size1; i++) scanf("%d", &arr1[i]);
//     printf("Enter size of second array: ");
//     scanf("%d", &size2);
//     int arr2[size2];
//     printf("Enter elements of second array: ");
//     for (int i = 0; i < size2; i++) scanf("%d", &arr2[i]);
//     int temp[200], k = 0; 
//     for (int i = 0; i < size1; i++) {
//         int exists = 0;
//         for (int j = 0; j < k; j++) {
//             if (arr1[i] == temp[j]) { exists = 1; break; }
//         }
//         if (!exists) temp[k++] = arr1[i];
//     }
//     for (int i = 0; i < size2; i++) {
//         int exists = 0;
//         for (int j = 0; j < k; j++) {
//             if (arr2[i] == temp[j]) { exists = 1; break; }
//         }
//         if (!exists) temp[k++] = arr2[i];
//     }
//     printf("Union: ");
//     for (int i = 0; i < k; i++) printf("%d ", temp[i]);
//     printf("\n");
//     return 0;
// }

// Q67: Intersection of Arrays
// #include <stdio.h>
// int main() {
//     int size1, size2;
//     printf("Enter size of first array: ");
//     scanf("%d", &size1);
//     int arr1[size1];
//     printf("Enter elements of first array: ");
//     for (int i = 0; i < size1; i++) scanf("%d", &arr1[i]);
//     printf("Enter size of second array: ");
//     scanf("%d", &size2);
//     int arr2[size2];
//     printf("Enter elements of second array: ");
//     for (int i = 0; i < size2; i++) scanf("%d", &arr2[i]);
//     printf("Intersection: ");
//     for (int i = 0; i < size1; i++) {
//         for (int j = 0; j < size2; j++) {
//             if (arr1[i] == arr2[j]) {
//                 printf("%d ", arr1[i]);
//                 break; 
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }

// Q68: Find Common Elements
#include <stdio.h>
int main() {
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < size1; i++) scanf("%d", &arr1[i]);
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < size2; i++) scanf("%d", &arr2[i]);
    printf("Common Elements: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n");
    return 0;
}