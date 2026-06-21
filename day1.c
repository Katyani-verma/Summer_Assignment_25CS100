// Q-1 Calculate the sum of the first N natural numbers
// #include<stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     printf("Enter a positive integer N: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         sum= sum+i;
//     }
//     printf("The sum of the first %d natural number is %d\n",n,sum);
//     return 0;
// }

// Q-2 Print the Multiplication Table of a Given Number 
// #include<stdio.h>
// int main()
// {
//     int i,num;
//     printf("Enter a number to print its multiplication table:");
//     scanf("%d",&num);
//     printf("\n Multiplication Table for %d:\n",num);
//     for (i=1; i<=10; i++)
//     {
//         printf("%d*%d=%d\n",num,i,num*i);
//     }
//     return 0;
// }

// Q-3 Find the Factorial of a Number
// #include<stdio.h>
// int main()
// {
//     int n,i, factorial=1;
//     printf("Enter an integer: ");
//     scanf("%d",&n);
//     if(n<0)
//     {
//         printf("Error! Factorial of a negative number doesn't exist\n");
//     }
//     else
//     {
//         for(i=1; i<=n; i++)
//         {
//             factorial= factorial*i;
//         }
//         printf("Factorial of %d= %d\n",n,factorial);
//     }
//     return 0;
// }

// Q-4 Count Digits in a Number
#include<stdio.h>
int main()
{
    int num,count=0,temp;
    printf("Enter an integer:");
    scanf("%d",&num);
    temp=num;
    if(num==0)
    {
        count=1;
    }
    else 
    {
        if(num<0)
        {
            num= -num;
        }
        while(num>0)
        {
            num= num/10;
            count++;
        }
    }
    printf("The number of digits in %d is: %d\n",temp,count);
    return 0;
}