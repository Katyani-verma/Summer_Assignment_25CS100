// Q109: Library Management System
// #include <stdio.h>
// struct Book {
//     int bookId;
//     char title[100];
//     char author[50];
//     float price;
// };
// int main() {
//     int n, i;
//     printf("=== Library Management System ===\n");
//     printf("Enter number of books to add: ");
//     scanf("%d", &n);
//     struct Book b[n];
//     for(i = 0; i < n; i++) {
//         printf("\nEnter details for Book %d:\n", i + 1);
//         printf("Book ID: ");
//         scanf("%d", &b[i].bookId);
//         printf("Title: ");
//         scanf(" %[^\n]s", b[i].title);
//         printf("Author: ");
//         scanf(" %[^\n]s", b[i].author);
//         printf("Price: ");
//         scanf("%f", &b[i].price);
//     }
//     printf("\n--- Available Books in Library ---\n");
//     printf("%-10s %-30s %-20s %-10s\n", "Book ID", "Title", "Author", "Price");
//     for(i = 0; i < n; i++) {
//         printf("%-10d %-30s %-20s %-10.2f\n", b[i].bookId, b[i].title, b[i].author, b[i].price);
//     }
//     return 0;
// }

// Q110: Bank Account System
// #include <stdio.h>
// struct Account {
//     int accNo;
//     char holderName[50];
//     float balance;
// };
// int main() {
//     int n, i;
//     printf("=== Bank Account System ===\n");
//     printf("Enter number of accounts to manage: ");
//     scanf("%d", &n);
//     struct Account a[n];
//     for(i = 0; i < n; i++) {
//         printf("\nEnter details for Account %d:\n", i + 1);
//         printf("Account Number: ");
//         scanf("%d", &a[i].accNo);
//         printf("Holder Name: ");
//         scanf(" %[^\n]s", a[i].holderName);
//         printf("Initial Balance: ");
//         scanf("%f", &a[i].balance);
//     }
//     printf("\n--- Bank Account Directory ---\n");
//     printf("%-15s %-25s %-12s\n", "Account No", "Holder Name", "Balance");
//     for(i = 0; i < n; i++) {
//         printf("%-15d %-25s $%-11.2f\n", a[i].accNo, a[i].holderName, a[i].balance);
//     }
//     return 0;
// }

// Q111: Ticket Booking System
// #include <stdio.h>
// struct Ticket {
//     int bookingId;
//     char movieName[50];
//     int seatCount;
//     float totalCost;
// };
// int main() {
//     int n, i;
//     float dynamic_ticket_price = 250.00; // Price per seat
//     printf("=== Ticket Booking System ===\n");
//     printf("Enter number of bookings to register: ");
//     scanf("%d", &n);
//     struct Ticket t[n];
//     for(i = 0; i < n; i++) {
//         printf("\nEnter details for Booking %d:\n", i + 1);
//         printf("Booking ID: ");
//         scanf("%d", &t[i].bookingId);
//         printf("Movie Name: ");
//         scanf(" %[^\n]s", t[i].movieName);
//         printf("Number of Seats: ");
//         scanf("%d", &t[i].seatCount);
        
//         t[i].totalCost = t[i].seatCount * dynamic_ticket_price;
//     }
//     printf("\n--- Active Bookings Summary ---\n");
//     printf("%-12s %-25s %-12s %-12s\n", "Booking ID", "Movie Name", "Seats", "Total Cost");
//     for(i = 0; i < n; i++) {
//         printf("%-12d %-25s %-12d ₹%-11.2f\n", t[i].bookingId, t[i].movieName, t[i].seatCount, t[i].totalCost);
//     }
//     return 0;
// }

// Q112: Contact Management System
#include <stdio.h>
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};
int main() {
    int n, i;
    printf("=== Contact Management System ===\n");
    printf("Enter number of contacts to save: ");
    scanf("%d", &n);
    struct Contact c[n];
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Contact %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", c[i].name);
        printf("Phone Number: ");
        scanf("%s", c[i].phone);
        printf("Email Address: ");
        scanf("%s", c[i].email);
    }
    printf("\n--- Contact Address Book ---\n");
    printf("%-20s %-15s %-25s\n", "Name", "Phone", "Email");
    for(i = 0; i < n; i++) {
        printf("%-20s %-15s %-25s\n", c[i].name, c[i].phone, c[i].email);
    }
    return 0;
}