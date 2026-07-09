// Q117: Student Record System (Using Arrays & Strings)
// #include <stdio.h>
// struct StudentNode {
//     int id;
//     char name[50];
//     char course[50];
// };
// int main() {
//     int count, i;
//     printf("=== Student Record System ===\n");
//     printf("Enter total records: ");
//     scanf("%d", &count);
//     struct StudentNode list[count];
//     for(i = 0; i < count; i++) {
//         printf("\nStudent [%d] ID: ", i + 1);
//         scanf("%d", &list[i].id);
//         printf("Student [%d] Name: ", i + 1);
//         scanf(" %[^\n]s", list[i].name);
//         printf("Student [%d] Course: ", i + 1);
//         scanf(" %[^\n]s", list[i].course);
//     }
//     printf("\n=== Database Profiles Compiled ===\n");
//     for(i = 0; i < count; i++) {
//         printf("ID: %d | Name: %-15s | Course: %s\n", list[i].id, list[i].name, list[i].course);
//     }
//     return 0;
// }

// Q118: Mini Library System
// #include <stdio.h>
// struct MiniLibrary {
//     char title[60];
//     int shelfNo;
// };
// int main() {
//     int count;
//     printf("=== Mini Library Track System ===\n");
//     printf("Enter how many books: ");
//     scanf("%d", &count);
//     struct MiniLibrary array[count];
//     for(int i = 0; i < count; i++) {
//         printf("Book %d Title: ", i + 1);
//         scanf(" %[^\n]s", array[i].title);
//         printf("Allocated Shelf Number: ");
//         scanf("%d", &array[i].shelfNo);
//     }
//     printf("\n--- Book Locators ---\n");
//     for(int i = 0; i < count; i++) {
//         printf("Shelf %d -> \"%s\"\n", array[i].shelfNo, array[i].title);
//     }
//     return 0;
// }

// Q119: Mini Employee Management System
// #include <stdio.h>
// struct MiniEmp {
//     int trackingId;
//     char designation[40];
// };
// int main() {
//     int dynamic_size;
//     printf("=== Mini Employee Tracker ===\n");
//     printf("Enter count: ");
//     scanf("%d", &dynamic_size);
//     struct MiniEmp registry[dynamic_size];
//     for(int i = 0; i < dynamic_size; i++) {
//         printf("ID Number: ");
//         scanf("%d", &registry[i].trackingId);
//         printf("Designation: ");
//         scanf(" %[^\n]s", registry[i].designation);
//     }
//     printf("\n--- Active Registry Summary ---\n");
//     for(int i = 0; i < dynamic_size; i++) {
//         printf("Employee ID: %d | Role: %s\n", registry[i].trackingId, registry[i].designation);
//     }
//     return 0;
// }

// Q120: Complete Mini Project Using Arrays, Strings, and Functions
#include <stdio.h>
// Struct definition
struct ProductItem {
    int id;
    char name[50];
    float price;
};
// Function declarations
void inputRecords(struct ProductItem list[], int size);
void printRecords(struct ProductItem list[], int size);
int main() {
    int total_items;
    printf("===== WELCOME TO THE COMPLETE MINI PROJECT =====\n");
    printf("This program partitions logic cleanly using C structural components.\n\n");
    printf("Enter the number of products you want to manage: ");
    scanf("%d", &total_items);
    struct ProductItem database[total_items];

    // Calling modular functions
    inputRecords(database, total_items);
    printRecords(database, total_items);
    printf("\n================================================\n");
    printf("Project executed successfully! Exiting program.\n");
    return 0;
}

// Function to handle database inputs
void inputRecords(struct ProductItem list[], int size) {
    printf("\n--- Step 1: Inputting %d Records ---\n", size);
    for(int i = 0; i < size; i++) {
        printf("\nEnter data for item #%d:\n", i + 1);
        printf("Enter Product ID: ");
        scanf("%d", &list[i].id);
        printf("Enter Product Name: ");
        scanf(" %[^\n]s", list[i].name);
        printf("Enter Unit Price: ");
        scanf("%f", &list[i].price);
    }
}

// Function to safely extract and showcase records
void printRecords(struct ProductItem list[], int size) {
    printf("\n--- Step 2: Displaying Formatted Records ---\n");
    printf("------------------------------------------------\n");
    printf("%-10s %-25s %-12s\n", "Prod ID", "Product Name", "Price");
    printf("------------------------------------------------\n");
    for(int i = 0; i < size; i++) {
        printf("%-10d %-25s $%-11.2f\n", list[i].id, list[i].name, list[i].price);
    }
    printf("------------------------------------------------\n");
}
