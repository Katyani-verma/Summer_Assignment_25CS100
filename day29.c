// Q113: Menu-Driven Calculator
// #include <stdio.h>
// int main() {
//     int choice;
//     float num1, num2;
//     while(1) {
//         printf("\n=== Menu-Driven Calculator ===\n");
//         printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
//         printf("Enter choice: ");
//         scanf("%d", &choice);
//         if(choice == 5) {
//             printf("Exiting calculator...\n");
//             break;
//         }
//         if(choice >= 1 && choice <= 4) {
//             printf("Enter two numbers: ");
//             scanf("%f %f", &num1, &num2);
//         }
//         switch(choice) {
//             case 1: printf("Result: %.2f\n", num1 + num2); break;
//             case 2: printf("Result: %.2f\n", num1 - num2); break;
//             case 3: printf("Result: %.2f\n", num1 * num2); break;
//             case 4: 
//                 if(num2 != 0) printf("Result: %.2f\n", num1 / num2);
//                 else printf("Error: Division by zero is not allowed!\n");
//                 break;
//             default: printf("Invalid option! Please pick a valid number.\n");
//         }
//     }
//     return 0;
// }

// Q114: Menu-Driven Array Operations System
// #include <stdio.h>
// int main() {
//     int arr[100], n = 0, choice, i, searchKey, found;
//     while(1) {
//         printf("\n=== Array Operations System ===\n");
//         printf("1. Insert Elements\n2. Display Array\n3. Search Element\n4. Exit\n");
//         printf("Enter choice: ");
//         scanf("%d", &choice);
//         switch(choice) {
//             case 1:
//                 printf("Enter how many elements: ");
//                 scanf("%d", &n);
//                 printf("Enter %d integers:\n", n);
//                 for(i = 0; i < n; i++) scanf("%d", &arr[i]);
//                 break;
//             case 2:
//                 if(n == 0) { printf("Array is empty!\n"); break; }
//                 printf("Array elements: ");
//                 for(i = 0; i < n; i++) printf("%d ", arr[i]);
//                 printf("\n");
//                 break;
//             case 3:
//                 if(n == 0) { printf("No elements to search!\n"); break; }
//                 printf("Enter element to find: ");
//                 scanf("%d", &searchKey);
//                 found = 0;
//                 for(i = 0; i < n; i++) {
//                     if(arr[i] == searchKey) {
//                         printf("Element found at index position %d.\n", i);
//                         found = 1;
//                         break;
//                     }
//                 }
//                 if(!found) printf("Element not present in the array.\n");
//                 break;
//             case 4:
//                 return 0;
//             default: printf("Invalid selection!\n");
//         }
//     }
// }

// Q115: Menu-Driven String Operations System
// #include <stdio.h>
// int main() {
//     int choice;
//     char str1[100], str2[50];
//     int len1, len2, i, j;
//     while(1) {
//         printf("\n=== String Operations System ===\n");
//         printf("1. Find Length of String\n2. Concatenate Two Strings\n3. Exit\n");
//         printf("Enter your option: ");
//         scanf("%d", &choice);
//         if(choice == 3) break;
//         switch(choice) {
//             case 1:
//                 printf("Enter a string: ");
//                 scanf(" %[^\n]s", str1);
//                 len1 = 0;
//                 while(str1[len1] != '\0') len1++;
//                 printf("Length of string: %d characters\n", len1);
//                 break;

//             case 2:
//                 printf("Enter first string: ");
//                 scanf(" %[^\n]s", str1);
//                 printf("Enter second string: ");
//                 scanf(" %[^\n]s", str2);
                
//                 // Find length of str1
//                 i = 0; while(str1[i] != '\0') i++;
                
//                 // Append str2 onto str1
//                 j = 0;
//                 while(str2[j] != '\0') {
//                     str1[i] = str2[j];
//                     i++; j++;
//                 }
//                 str1[i] = '\0'; // Null-terminate string
//                 printf("Concatenated Result: %s\n", str1);
//                 break;
//             default: printf("Invalid choice!\n");
//         }
//     }
//     return 0;
// }

// Q116: Inventory Management System
#include <stdio.h>
struct Product {
    int itemCode;
    char name[40];
    int qty;
    float cost;
};
int main() {
    int n, i;
    printf("=== Inventory Management System ===\n");
    printf("Enter number of individual items to log: ");
    scanf("%d", &n);
    struct Product item[n];
    for(i = 0; i < n; i++) {
        printf("\nProduct #%d Details:\n", i + 1);
        printf("Item Code: ");
        scanf("%d", &item[i].itemCode);
        printf("Product Name: ");
        scanf(" %[^\n]s", item[i].name);
        printf("Quantity: ");
        scanf("%d", &item[i].qty);
        printf("Unit Price: ");
        scanf("%f", &item[i].cost);
    }
    printf("\n--- Current Inventory Status Report ---\n");
    printf("%-10s %-20s %-10s %-12s\n", "Code", "Item Name", "Stock Qty", "Unit Price");
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-10d $%-11.2f\n", item[i].itemCode, item[i].name, item[i].qty, item[i].cost);
    }
    return 0;
}