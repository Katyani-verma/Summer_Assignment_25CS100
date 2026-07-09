// Q-9 Check whether a number is prime
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int num, i;
//     bool isprime= true;
//     printf("Enter a positive integer:");
//     scanf("%d",&num);
//     if(num<=1)
//     {
//         isprime=false;
//     }
//     else
//     {
//         for(i=2; i*i<= num; i++)
//         {
//             if(num%i==0)
//             {
//                 isprime= false;
//             }
//         }
//     }
//     if(isprime)
//     {
//         printf("%d is a prime number.\n",num);
//     }
//     else{
//         printf("%d is not a prime number.\n",num);
//     }
//     return 0;
// }

// Q-10 Print Prime Numbers in a Range
// #include<stdio.h>
// int main()
// {
//     int low, high, isprime, i;
//     printf("Enter lower and upper limit:");
//     scanf("%d %d", &low,&high);
//     printf("Prime numbers between %d and %d are: \n", low, high);
//     for(i=low; i<=high; i++)
//     {
//         if(i<=1)
//         {
//             continue;
//         }
//         isprime=1;
//         for(int j=2; j*j<=i; j++)
//         {
//             if(i%j==0)
//             {
//                 isprime=0;
//                 break;
//             }
//         }
//         if(isprime==1)
//         {
//             printf("%d",i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// Q-11 Find Greatest Common Divisor of Two Numbers
// #include <stdio.h>
// int main() {
//     int n1, n2, a, b, temp;
//     printf("Enter two integers: ");
//     scanf("%d %d", &n1, &n2);
//     a = n1;
//     b = n2;
//     while (b != 0) {
//         temp = b;
//         b = a % b;
//         a = temp;
//     }
//     printf("GCD of %d and %d is: %d\n", n1, n2, a);
//     return 0;
// }

// Find LCM of Two Numbers
// #include <stdio.h>
// int main() {
//     int n1, n2, a, b, temp, gcd, lcm;
//     printf("Enter two integers: ");
//     scanf("%d %d", &n1, &n2);
//     a = n1;
//     b = n2;
//     while (b != 0) {
//         temp = b;
//         b = a % b;
//         a = temp;
//     }
//     gcd = a;
//     lcm = (n1 * n2) / gcd;
//     printf("LCM of %d and %d is: %d\n", n1, n2, lcm);
//     return 0;
// }

