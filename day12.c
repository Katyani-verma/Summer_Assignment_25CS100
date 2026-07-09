// Q45: Palindrome Number
// #include <stdio.h>
// int isPalindrome(int n) {
//     int original = n;
//     int reversed = 0, remainder;
//     while (n > 0) {
//         remainder = n % 10;
//         reversed = reversed * 10 + remainder;
//         n /= 10;
//     }
//     return (original == reversed);
// }
// int main() {
//     int num;
//     printf("Enter a number to check palindrome: ");
//     scanf("%d", &num);
    
//     if (isPalindrome(num)) {
//         printf("%d is a palindrome.\n", num);
//     } else {
//         printf("%d is not a palindrome.\n", num);
//     }
//     return 0;
// }

// Q46: Armstrong Number
// #include <stdio.h>
// int isArmstrong(int n) {
//     int original = n;
//     int sum = 0, remainder;
//     while (n > 0) {
//         remainder = n % 10;
//         sum += (remainder * remainder * remainder);
//         n /= 10;
//     }
//     return (original == sum);
// }
// int main() {
//     int num;
//     printf("Enter a 3-digit number to check Armstrong: ");
//     scanf("%d", &num);
//     if (isArmstrong(num)) {
//         printf("%d is an Armstrong number.\n", num);
//     } else {
//         printf("%d is not an Armstrong number.\n", num);
//     }
//     return 0;
// }

// Q47: Fibonacci Series
// #include <stdio.h>
// void printFibonacci(int n) {
//     int t1 = 0, t2 = 1, nextTerm;
//     printf("Fibonacci Series up to %d terms: ", n);
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     printf("\n");
// }
// int main() {
//     int terms;
//     printf("Enter the number of terms for Fibonacci: ");
//     scanf("%d", &terms);
//     if (terms <= 0) {
//         printf("Please enter a positive number of terms.\n");
//     } else {
//         printFibonacci(terms);
//     }
//     return 0;
// }

// Q48: Perfect Number
// #include <stdio.h>
// int isPerfect(int n) {
//     int sum = 0;
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) {
//             sum += i;
//         }
//     }
//     return (sum == n);
// }
// int main() {
//     int num;
//     printf("Enter a number to check perfect number: ");
//     scanf("%d", &num);
//     if (isPerfect(num)) {
//         printf("%d is a perfect number.\n", num);
//     } else {
//         printf("%d is not a perfect number.\n", num);
//     }
//     return 0;
// }

