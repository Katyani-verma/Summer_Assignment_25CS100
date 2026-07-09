// Q41: Function to find sum of two numbers
// #include <stdio.h>
// int findSum(int a, int b) {
//     return a + b;
// }
// int main() {
//     int num1, num2, sum;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2); 
//     sum = findSum(num1, num2);
//     printf("Sum of %d and %d is: %d\n", num1, num2, sum);
//     return 0;
// }

// Q42: Find Maximum
// #include <stdio.h>
// int findMax(int a, int b) {
//     return (a > b) ? a : b;
// }
// int main() {
//     int num1, num2;
//     printf("Enter two numbers to find maximum: ");
//     scanf("%d %d", &num1, &num2);
//     printf("Maximum is: %d\n", findMax(num1, num2));
//     return 0;
// }

// Q43: Check Prime
// #include <stdio.h>
// int isPrime(int n) {
//     if (n <= 1) return 0;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return 0;
//     }
//     return 1;
// }
// int main() {
//     int num;
//     printf("Enter a number to check prime: ");
//     scanf("%d", &num);
//     if (isPrime(num)) {
//         printf("%d is a prime number.\n", num);
//     } else {
//         printf("%d is not a prime number.\n", num);
//     }
//     return 0;
// }

// Q44: Find Factorial
#include <stdio.h>
long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    printf("Enter a number for factorial: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        printf("Factorial of %d is: %lld\n", num, findFactorial(num));
    }
    return 0;
}
