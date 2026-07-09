// Q-17 Check Perfect Number 
// #include <stdio.h>
// int main() {
//     int num, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= num / 2; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }
//     if (sum == num && num > 0) {
//         printf("%d is a Perfect Number.\n", num);
//     } else {
//         printf("%d is not a Perfect Number.\n", num);
//     }
//     return 0;
// }

// Q-18 Check strong number
// #include <stdio.h>
// int main() {
//     int num, originalNum, rem, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum > 0) {
//         rem = originalNum % 10;
//         int fact = 1;
//         for (int i = 1; i <= rem; i++) {
//             fact *= i;
//         } 
//         sum += fact;
//         originalNum /= 10;
//     }
//     if (sum == num) {
//         printf("%d is a Strong Number.\n", num);
//     } else {
//         printf("%d is not a Strong Number.\n", num);
//     }
//     return 0;
// }

// Q-19 Print Factors of a Number 
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     printf("Factors of %d are: ", num);
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }

// Q20: Find Largest Prime Factor
#include <stdio.h>
int main() {
    int num, maxPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n = num;
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2) {
        maxPrime = n;
    }
    printf("Largest prime factor of %d is: %d\n", num, maxPrime);
    return 0;
}