// Q-13 Generate Fibonacci Series
// #include <stdio.h>
// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: ");
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     printf("\n");
//     return 0;
// }

// Q-14 Find nth Fibonacci Term
// #include <stdio.h>
// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm;
//     printf("Enter the position (n): ");
//     scanf("%d", &n);
//     if (n == 1) {
//         printf("The %dth Fibonacci term is: %d\n", n, t1);
//     } else if (n == 2) {
//         printf("The %dth Fibonacci term is: %d\n", n, t2);
//     } else {
//         for (int i = 3; i <= n; i++) {
//             nextTerm = t1 + t2;
//             t1 = t2;
//             t2 = nextTerm;
//         }
//         printf("The %dth Fibonacci term is: %d\n", n, t2);
//     }
//     return 0;
// }

// Check Armstrong Number
// #include <stdio.h>
// #include <math.h> 
// int main() {
//     int num, originalNum, remainder, result = 0, n = 0;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0) {
//         originalNum /= 10;
//         n++;
//     }
//     originalNum = num;
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += round(pow(remainder, n)); 
//         originalNum /= 10;
//     }
//     if (result == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);
//     return 0;
// }

// Print Armstrong Numbers in a Range 
#include <stdio.h>
#include <math.h>
int main() {
    int low, high, number, originalNum, rem, count, sum;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: \n", low, high);
    for (int i = low; i <= high; i++) {
        number = i;
        originalNum = number;
        count = 0;
        sum = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            count++;
        }
        originalNum = number;
        while (originalNum != 0) {
            rem = originalNum % 10;
            sum += round(pow(rem, count));
            originalNum /= 10;
        }
        if (sum == number && number > 0) {
            printf("%d ", number);
        }
    }
    printf("\n");
    return 0;
}