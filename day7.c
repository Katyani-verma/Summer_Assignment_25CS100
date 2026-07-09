// Q25: Recursive Factorial
// #include <stdio.h>
// int factorial(int n) {
//     if (n <= 1) 
//         return 1; 
//     return n * factorial(n - 1); 
// }
// int main() {
//     int num;
//     printf("Enter any positive integer: ");
//     scanf("%d", &num);   
//     if(num < 0) {
//         printf("Factorial of negative numbers doesn't exist.\n");
//     } else {
//         printf("Factorial of %d is %d\n", num, factorial(num));
//     }
//     return 0;
// }

// Q26: Recursive Fibonacci
// #include <stdio.h>
// int fibonacci(int n) {
//     if (n <= 0) return 0;
//     if (n == 1) return 1; 
//     return fibonacci(n - 1) + fibonacci(n - 2); 
// }
// int main() {
//     int terms;
//     printf("Enter the number of terms for Fibonacci series: ");
//     scanf("%d", &terms); 
//     printf("Fibonacci Series: ");
//     for (int i = 0; i < terms; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n"); 
//     return 0;
// }

// Q27: Recursive Sum of Digits
// #include <stdio.h>
// int sumOfDigits(int n) {
//     if (n == 0) 
//         return 0; 
//     return (n % 10) + sumOfDigits(n / 10); 
// }
// int main() {
//     int num;
//     printf("Enter any integer: ");
//     scanf("%d", &num);
//     int temp = (num < 0) ? -num : num;
//     printf("Sum of digits of %d is %d\n", num, sumOfDigits(temp));
//     return 0;
// }

// Q28: Recursive Reverse Number
#include <stdio.h>
int reverseNumber(int n, int rev) {
    if (n == 0) 
        return rev; 
    return reverseNumber(n / 10, rev * 10 + (n % 10)); 
}
int main() {
    int num;
    printf("Enter any integer: ");
    scanf("%d", &num);
    int reversed = reverseNumber(num, 0);
    printf("Reverse of %d is %d\n", num, reversed);
    return 0;
}