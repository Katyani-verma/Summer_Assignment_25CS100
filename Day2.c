// Q-5 Find Sum of digits of a number
// #include<stdio.h>
// int main()
// {
//     int num,temp,remainder,sum=0;
//     printf("Enter an integer:");
//     scanf("%d",&num);
//     temp=num;
//     if(num<0)
//     {
//         num=-num;
//     }
//     while(num>0)
//     {
//         remainder=num%10;
//         sum=sum+remainder;
//         num=num/10;
//     }
//     printf("The sum of digits of %d is: %d\n", temp,sum);
//     return 0;
// }

// Q-6 Reverse a Number 
// #include<stdio.h>
// int main()
// {
//     int num,temp, remainder, reversed=0;
//     printf("Enter an integer:");
//     scanf("%d",&num);
//     temp=num;
//     while(temp>0)
//     {
//         remainder=temp%10;
//         reversed=reversed*10+remainder;
//         temp/=10;
//     }
//     printf("Reversed number= %d\n", reversed);
//     return 0;
// }

// Product of Digits
// #include<stdio.h>
// int main()
// {
//     int num, temp, remainder, product=1;
//     printf("Enter an integer:");
//     scanf("%d",&num);
//     temp=num;
//     if(temp==0)
//     {
//         product=0;
//     }
//     while (temp>0)
//     {
//         remainder=temp%10;
//         product*= remainder;
//         temp/= 10;
//     }
//     printf("Product of digits of %d=%d\n",num,product);
//     return 0;
// }

// Q-8 Ckeck Palindrome
// #include<stdio.h>
// int main()
// {
//     int num, remainder, reversed = 0;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     int temp = num;
//     while (temp > 0) {
//         remainder = temp % 10;
//         reversed = reversed * 10 + remainder;
//         temp /= 10;
//     }
//     if (num == reversed) {
//         printf("%d is a palindrome.\n", num);
//     } else {
//         printf("%d is not a palindrome.\n", num);
//     }
//     return 0;
// }