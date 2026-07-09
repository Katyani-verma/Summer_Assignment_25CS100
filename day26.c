// Q101: Number Guessing Game
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main() {
//     int secret_number, guess, attempts = 0;
//     srand(time(0)); 
//     secret_number = (rand() % 100) + 1; 
//     printf("=== Welcome to the Number Guessing Game! ===\n");
//     printf("I have chosen a number between 1 and 100. Try to guess it!\n\n");
//     do {
//         printf("Enter your guess: ");
//         scanf("%d", &guess);
//         attempts++;
//         if (guess > secret_number) {
//             printf("Too high! Try again.\n");
//         } else if (guess < secret_number) {
//             printf("Too low! Try again.\n");
//         } else {
//             printf("\nCongratulations! You guessed the number in %d attempts.\n", attempts);
//         }
//     } while (guess != secret_number);
//     return 0;
// }

// Q102: Voting Eligibility System
// #include <stdio.h>
// int main() {
//     int age;
//     printf("=== Voting Eligibility System ===\n");
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if (age >= 18) {
//         printf("You are eligible to vote! Please register if you haven't already.\n");
//     } else {
//         printf("You are not eligible to vote yet. You need to wait %d more year(s).\n", 18 - age);
//     }
//     return 0;
// }

// Q103: ATM Simulation
// #include <stdio.h>

// int main() {
//     float balance = 5000.0; // Initial balance
//     int choice;
//     float amount;

//     while (1) {
//         printf("\n=== ATM Simulation ===\n");
//         printf("1. Check Balance\n");
//         printf("2. Deposit Money\n");
//         printf("3. Withdraw Money\n");
//         printf("4. Exit\n");
//         printf("Enter your choice (1-4): ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Your current balance is: $%.2f\n", balance);
//                 break;
//             case 2:
//                 printf("Enter amount to deposit: ");
//                 scanf("%f", &amount);
//                 if (amount > 0) {
//                     balance += amount;
//                     printf("$%.2f deposited successfully.\n", amount);
//                 } else {
//                     printf("Invalid amount!\n");
//                 }
//                 break;
//             case 3:
//                 printf("Enter amount to withdraw: ");
//                 scanf("%f", &amount);
//                 if (amount > balance) {
//                     printf("Insufficient balance!\n");
//                 } else if (amount <= 0) {
//                     printf("Invalid amount!\n");
//                 } else {
//                     balance -= amount;
//                     printf("$%.2f withdrawn successfully.\n", amount);
//                 }
//                 break;
//             case 4:
//                 printf("Thank you for using our ATM. Goodbye!\n");
//                 return 0;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }
// }

// Q104: Quiz Application
#include <stdio.h>
int main() {
    char answer;
    int score = 0;
    printf("=== Welcome to the Mini C Programming Quiz ===\n\n");

    // Question 1
    printf("Q1. Which data type is used to store characters in C?\n");
    printf("A) int   B) char   C) float   D) double\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') { score++; printf("Correct!\n\n"); } else { printf("Wrong answer!\n\n"); }

    // Question 2
    printf("Q2. Format specifier '%%d' is used for which data type?\n");
    printf("A) float   B) char   C) integer   D) string\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') { score++; printf("Correct!\n\n"); } else { printf("Wrong answer!\n\n"); }

    // Question 3
    printf("Q3. Which loop is guaranteed to execute at least once?\n");
    printf("A) for   B) while   C) do-while   D) none\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') { score++; printf("Correct!\n\n"); } else { printf("Wrong answer!\n\n"); }
    printf("=== Quiz Complete! ===\n");
    printf("Your total score: %d out of 3\n", score);
    return 0;
}