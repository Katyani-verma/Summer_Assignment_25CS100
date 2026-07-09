//  Q-21 Convert Decimal to Binary
// #include <stdio.h>
// int main() {
//     int decimalNum, binaryNum = 0, remainder, base = 1;
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimalNum);
//     int temp = decimalNum;
//     while (temp > 0) {
//         remainder = temp % 2;
//         binaryNum = binaryNum + remainder * base;
//         temp = temp / 2;
//         base = base * 10; 
//     }
//     printf("Binary of %d is: %d\n", decimalNum, binaryNum);
//     return 0;
// }

// Q-22 Covert Binary to Decimal
// #include <stdio.h>
// int main() {
//     int binaryNum, decimalNum = 0, remainder, base = 1;
//     printf("Enter a binary number: ");
//     scanf("%d", &binaryNum);
//     int temp = binaryNum;
//     while (temp > 0) {
//         remainder = temp % 10;
//         decimalNum = decimalNum + remainder * base;
//         temp = temp / 10;
//         base = base * 2; 
//     }
//     printf("Decimal of %d is: %d\n", binaryNum, decimalNum);
//     return 0;
// }

// Q-23 Count Set Bits in a Number
// #include <stdio.h>
// int main() {
//     int num, count = 0;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     int temp = num;
//     while (temp > 0) {
//         if (temp & 1) {
//             count++;
//         }
//         temp = temp >> 1; 
//     }
//     printf("Number of set bits in %d is: %d\n", num, count);
//     return 0;
// }

// Q24	Write a program to Find x^n without pow().
#include <stdio.h>
int main() {
    int x, n;
    long long result = 1;
    printf("Enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    printf("%d^%d = %lld\n", x, n, result);
    return 0;
}