// program 1( Swaping of two number by using third variable)
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a and b");
//     scanf("%d%d", &a, &b);
//     printf("%d%d",a,b);
//     c=a;
//     a=b;
//     b=c;
//     printf("\n%d%d",a,b);
//     return 0;
// }

// program 2(Swaping of two number without using third variable)
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Emter the value");
//     scanf("%d%d",&a,&b);
//     printf("%d%d",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("\n%d%d",a,b);
//     return 0;
// }

// program 3(Find Sum and Percentage of 5 Subject)
// #include<stdio.h>
// int main()
// {
//     int s1,s2,s3,s4,s5,Sum;
//     float Percantage;
//     printf("Enter the Marks of Five Subject");
//     scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
//     Sum=s1+s2+s3+s4+s5;
//     Percantage=Sum/5;
//     printf("Sum of five Subject=%d",Sum);
//     printf("Percentage of Five Subject=%f",Percantage);
//     return 0;
// }

// Program 4(Calculate the simple intrest and compound intrest)
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float P,R,T,SI,CI;
//     printf("Enter the value of P,R, T");
//     scanf("%f%f%f",&P,&R,&T);
//     SI=(P*R*T)/100;
//     CI=P*(pow((1+R/100),T));
//     printf("%f\n%f",SI,CI);
//     return 0;
// }

// Program 5(Calculate the area and circumfareance of circle)
// #include<stdio.h>
// int main()
// {
//     int Radius;
//     float Pi,Area,Circumfarance;
//     printf("Enter the Radius of Circle");
//     scanf("%d",&Radius);
//     Pi=3.14;
//     Area=Pi*Radius*Radius;
//     Circumfarance=2*Pi*Radius;
//     printf("%f\n%f",Area,Circumfarance);
//     return 0;
// }

// Program 6(Convert Terperature centigrade to Fahrenheit)
// #include<stdio.h>
// int main()
// {
//     float C,F;
//     printf("Enter the temperature in Centigrade");
//     scanf("%f",&C);
//     F=(9*C/5)+32;
//     printf("Temperature in Fahrenheit=%.2f",F);
//     return 0;
// }

// Program 7(Two Numbers are equal or Not)
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the first and second number");
//     scanf("%d%d",&a,&b);
//     if(a==b)
//     {
//         printf("Both Numbers are equal");
//     }
//     else
//     {
//         printf("Both Number are not equal");
//     }
//     return 0;
//     }

// Program 8(Find the greatest of three number)
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a,b,c");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>=b && a>=c)
//     {
//         printf("Greatest No. is: %d",a);
//     }
//     else if (b>=a && b>=c)
//     {
//         printf("Greatest No. is: %d",b);
//     }
//     else
//     {
//         printf("Greatest No. is: %d",c);
//     }
//     return 0;
// }

// Program 9(Find the given number is Even or Odd)
// #include<stdio.h>
// int main()
// {
//     int Num;
//     printf("Enter a Number");
//     scanf("%d",&Num);
//     if(Num%2==0)
//     {
//         printf("Number is Even");
//     }
//     else
//     {
//         printf("Number is odd");
//     }
//     return 0;
// }

// Program 9(Find a year is leap year or not)
// #include<stdio.h>
// int main()
// {
//     int yr;
//     printf("Enter a year");
//     scanf("%d",&yr);
//     if (yr%4==0)
//     {
//         printf("Leap year");
//     }
//     else
//     {
//         printf("Not a Leap year");
//     }
//     return 0;
// }

// Program 10(Find the percentage of 5 subject and print grade)
// #include<stdio.h>
// int main()
// {
//     int s1,s2,s3,s4,s5,Sum;
//     float Percentage;
//     printf("Enter the marks of five subject");
//     scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
//     Sum=s1+s2+s3+s4+s5;
//     Percentage=Sum/5;
//     printf("%d\n%.2f\n",Sum,Percentage);
//     if(Percentage>=90 && Percentage<=100)
//     {
//         printf("Grade A");
//     }
//     else if(Percentage>=80 && Percentage<90)
//     {
//         printf("Grade B");
//     }
//     else if(Percentage>=60 && Percentage,80)
//     {
//         printf("Grade C");
//     }
//     else{
//         printf("Grade D");
//     }
//     return 0;
// }

// Program 11(Find largest 3 number by using Nested Condition)
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the three Numbers");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b)
//     {
//         if(a>c)
//         {
//             printf("Largest Number is: %d",a);
//         }
//         else
//         {
//             printf("Largest Number is: %d",c);
//         }
//     }
//     else
//     {
//         if(b>c)
//         {
//            printf("Largest Number is: %d",b); 
//         }
//         else
//         {
//             printf("Largest Number is: %d",c);
//         }
//     }
//     return 0;
// }

// Program 12(Electricity Bill)
// #include<stdio.h>
// int main()
// {
//     int Unit,Bill;
//     printf("Enter the Electricity Unit");
//     scanf("%d",&Unit);
//     if(Unit<=100)
//     {
//         Bill=Unit*5;
//         printf("Payment is: %d",Bill);
//     }
//     else if(Unit>=101 && Unit<=200)
//     {
//         Bill=100*5+(Unit-100)*6;
//         printf("Payment is: %d",Bill);
//     }
//     else if(Unit>=201 && Unit<=300)
//     {
//         Bill=100*5+100*6+(Unit-200)*7;
//         printf("Payment is: %d",Bill);
//     }
//     else
//     {
//         Bill=100*5+100*6+100*7+(Unit-300)*8;
//         printf("Payment is: %d",Bill);
//     }
//     return 0;
// }

// Program 13(Make Calculator for +,-,*,/)
// #include<stdio.h>
// int main()
// {
//     int a,b,c,choice;
//     printf("Enter the value of a and b");
//     scanf("%d%d",&a,&b);
//     printf("\n1 for +");
//     printf("\n2 for -");
//     printf("\n3 for *");
//     printf("\n4 for /");
//     printf("\nEnter your choice");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//         case 1:
//         c=a+b;
//         printf("%d",c);
//         break;
//         case 2:
//         c=a-b;
//         printf("%d",c);
//         break;
//         case 3:
//         c=a*b;
//         printf("%d",c);
//         break;
//         case 4:
//         c=a/b;
//         printf("%d",c);
//         break;
//         default:
//         printf("Invalid choice");
//     }
//     return 0;
// }

// Program 14(Find the area of rectangle,triangle,cirle,square by using switch case)
// #include<stdio.h>
// int main()
// {
//     int area,radius,length,breath,base,height,side,choice;
//     printf("\n1 for area of rectangle");
//     printf("\n2 for area of circle");
//     printf("\n3 for area of square");
//     printf("\n4 for area of triangle");
//     printf("\nEnter your choice");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//         case 1:
//         printf("Enter the length and breath of reactangle");
//         scanf("%d%d",&length,&breath);
//         area=length*breath;
//         printf("Area of Rectangle: %d",area);
//         break;
//         case 2:
//         printf("Enter the Radius of Circle");
//         scanf("%d",&radius);
//         area=3.14*radius*radius;
//         printf("Area of Circle: %d",area);
//         break;
//         case 3:
//         printf("Enter the side of Square");
//         scanf("%d",&side);
//         area=side*side;
//         printf("Area of Square: %d",area);
//         break;
//         case 4:
//         printf("Enter the base and height of triangle");
//         scanf("%d%d",&base,&height);
//         area=0.5*base*height;
//         printf("Area of Triangle: %d",area);
//         break;
//         default :
//         printf("Invalid choice");
//     }
//     return 0;
// }

// Program 15(To Find Factorial)
// #include<stdio.h>
// int main()
// {
//     int i,n,fact=1;
//     printf("Enter the factorial No.");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// Program 16(FIBONACCI)
// #include<stdio.h>
// int main()
// {
//     int n1,n2,n3,num;
//     n1=0;
//     n2=1;
//     printf("Enter num value");
//     scanf("%d",&num);
//     printf("%d",n1);
//     printf("%d",n2);
//     for (int i=2; i<num; i++)
//     {
//         n3=n1+n2;
//         printf("%d",n3);
//         n1=n2;
//         n2=n3;
//     }
//     return 0;
// }

// Program 17(Reverse case: r=n%10,s=s*10+r,n=n/10)
// #include<stdio.h>
// int main()
// {
//     int r,s=0,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         r=n%10;
//         s=s*10+r;
//         n=n/10;
//     }
//     printf("%d",s);
//     return 0;
// }

// Program 18(Reverse case palendrom)
// #include<stdio.h>
// int main()
// {
//     int r,s=0,n,p;
//     printf("Enter the number");
//     scanf("%d",&n);
//     p=n;
//     while(n>0)
//     {
//         r=n%10;
//         s=s*10+r;
//         n=n/10;
//     }
//     printf("%d",s);
//     if(p==s)
//         printf("\nPalindrome");
//     }
//     else
//     {
//         printf("\nNot Palindrome");
//     }
//     return 0;
// }

// Program 19(calculator Takes two operands and one operator from the user and perform the operation and prints the result using switch statement)
// #include<stdio.h>
// int main()
// {
//     char op;
//     int a,b;
//     printf("Enter number operator and second number");
//     scanf("%d%c%d",&a,&op,&b);
//     switch(op)
//     {
//         case '+':
//         printf("Result=%d",a+b);
//         break;
//         case '-':
//         printf("Result=%d",a-b);
//         break;
//         case '*':
//         printf("Result=%d",a*b);
//         break;
//         case '/':
//         printf("Result=%d",a/b);
//         break;
//         case '%':
//         printf("Result=%d",a%b);
//         break;
//         default :
//         printf("Enter valid operator");
//     }
//     return 0;
// }

// Program 20(Print the sum of all numbers up to a given number)
// #include<stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     printf("Enter the number");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//     sum=sum+i;
//     }
//     printf("Sum of Numbers=%d\n",sum);
//     return 0;
// }

// Program 21(Print the sum of even and odd numbers from 1 to N numbers)
// #include<stdio.h>
// int main()
// {
//     int i,num,sum_even=0,sum_odd=0;
//     printf("Enter the Number");
//     scanf("%d",&num);
//     for(i=1; i<=num; i++)
//     {
//     if(i%2==0)
//     sum_even=sum_even+i;
//     else
//     sum_odd=sum_odd+i;
//     }
//     printf("Sum od all odd numbers=%d\n",sum_odd);
//     printf("Sum of all Even numbers=%d\n",sum_even);
//     return 0;
// }

// Program 22 (Array- To find the largest number)
// #include<stdio.h>
// int main()
// {
//     int a[30],i,largest;
//     for(i=0; i<10; i++)
//     {
//         printf("Enter the Numbers");
//         scanf("%d",&a[i]);
//     }
//     largest=a[0];
//     for(i=1; i<10; i++)
//     {
//         if(a[i]>largest)
//         {
//             largest=a[i];
//         }
//     }
//     printf("Largest number is:=%d\n",largest);
//     return 0;
// }

// Program 23 (Array- To find the smallest number)
// #include<stdio.h>
// int main()
// {
//     int a[30],i,smallest;
//      printf("Enter the Numbers");
//     for(i=0; i<10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     smallest=a[0];
//     for(i=1; i<10; i++)
//     {
//         if(a[i]<smallest)
//         {
//             smallest=a[i];
//         }
//     }
//     printf("smallest number is:=%d\n",smallest);
//     return 0;
// }

// Program 24 (Array- To find the smallest and largest number)
// #include<stdio.h>
// int main()
// {
//     int a[30],i,smallest,largest;
//      printf("Enter the Numbers");
//     for(i=0; i<10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     smallest=a[0];
//     largest=a[0];
//     for(i=1; i<10; i++)
//     {
//         if(a[i]<smallest)
//         {
//             smallest=a[i];
//         }
//         else if(a[i]>largest)
//         {
//             largest=a[i];
//         }
//     }
//     printf("smallest number is:=%d\n",smallest);
//     printf("Larfest number is:=%d\n",largest);
//     return 0;
// }
// Program 25(Two Dimenstional Erray- Print the 3*3 matrix)
// #include<stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     printf("Enter the Matrix");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d\t",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Program 26(Two Dimentional Erray-Print the Muliple of two matrixs)
// #include<stdio.h>
// int main()
// {
//     int a[10][10], b[10][10], multi[10][10],i,j,k,c,r;
//     printf("Enter the number of rows=");
//     scanf("%d",&r);
//     printf("Enter the Number of column=");
//     scanf("%d",&c);
//     printf("Enter the first Matrix\n");
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the second matrix\n");
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("Multiply of the matrix\n");
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             multi[i][j]=0;
//             for(k=0; k<c; k++)
//             {
//                 multi[i][j]=a[i][k]*b[j][k];
//             }
//         }
//     }
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             printf("%d\t",multi[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Program 27(Pattern coding)
// # include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1; i<=3; i++)
//     {
//         for(j=1; j<=3; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1; i<=4; i++)
//     {
//         for(j=i; j<=4; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1; i<=4; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1; i<=4; i++)
//     {
//         for(j=1; j<=5-i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1; i<=4; i++)
//     {
//         for(j=4; j>i; j--)
//         {
//             printf(" ");
//         }
//         for(k=1; k<=(2*i-1); k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Program 28(Structure)
// #include<stdio.h>
// struct student
// {
//     char name[50];
//     int age;
//     float total_marks;
// };
// int main()
// {
// struct student student1, student2;
// printf("Input details of student1:\n");
// printf("name");
// scanf("%s",&student1.name);
// printf("age");
// scanf("%d",&student1.age);
// printf("Total marks");
// scanf("%f",&student2.total_marks);
// printf("Input details of student1:\n");
// printf("name");
// scanf("%s",&student2.name);
// printf("age");
// scanf("%d",&student2.age);
// printf("Total marks");
// scanf("%f",&student2.total_marks);
// return 0;
// }

// #include<stdio.h>
// struct student
// {
//     char name[50];
//     int age;
//     float total_marks;
// };
// int main()
// {
// struct student s[1000];
// int i;
// for(i=0; i<1000; i++)
// {
// printf("Input details of student:\n");
// printf("name");
// scanf("%s",&s[i].name);
// printf("age");
// scanf("%d",&s[i].age);
// printf("Total marks");
// scanf("%f",&s[i].total_marks);
// }
// printf("\n Details of all students");
// for(i=0; i<1000; i++);
// {
//     printf("name:)%s\t age:)%d\t marks:)%d",s[i].name,s[i].age,s[i].total_marks);
// }
// return 0;
// }

//Program 29
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i,loc=0,x;
//     printf("How many elements");
//     scanf("%d",&n);
//     printf("Enter Array");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter element to be searched\n");
//     scanf("%d",&x);
//     printf("\nLinear search");
//     for(i=0; i<n; i++)
//     {
//         if(a[i]==x)
//         {
//             loc=i+1;
//               break;
//         }
//     }
//     if(loc>0)
//     {
//         printf("\nItem Found");
//     }
//     else{
//         printf("\nnot found");
//     }
//     return 0;
// }

// Fabonacci series
// #include<stdio.h>
// int main()
// {
//     int x,y,z,i,n;
//     x=0;
//     y=1;
//     printf("Enter the number of terms");
//     scanf("%d",&n);
//     printf("%d\t%d\t",x,y);
//     for(i=1; i<n; i++)
//     {
//     z=x+y;
//     printf("%d\t",z);
//     x=y;
//     y=z;
//     }
//     printf("\n");
//     return 0;
// }

// Armstrong number using reverse case
// #include<stdio.h>
// int main()
// {
//     int r,n,c,arm=0;
//     printf("Enter any Number");
//     scanf("%d",&n);
//     c=n;
//     while(n>0)
//     {
//         r=n%10;
//         arm=(r*r*r)+arm;
//         n=n/10;
//     }
//     if(c==arm)
//     {
//         printf("Armstrong Number");
//     }
//     else
//     {
//         printf("Not a Armstrong Number");
//     }
//     return 0;
// }

// Nested loop(Pattern)
// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=1; i<=4; i++)
//     {
//         for(j=1; j<=5-i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1; i<=4; i++)
//     {
//         for(j=4; j>i; j--)
//         {
//             printf(" ");
//         }
//         for(k=1; k<=(2*i-1); k++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     char ch='A';
//     for(i=1; i<=4; i++)
//     {
//         for(j=1; j<=i; j++)
//         {
//                 printf("%c",ch);
//                 ch++;
           
//             }
//         printf("\n");
//     }
//     return 0;
// }

// one dimensional array
// #include<stdio.h>
// int main()
// {
//     int a[30], i, largest;
//     printf("Enter the Numbers");
//     for(i=0; i<10; i++)
//     {
        
//         scanf("%d",&a[i]);
//     }
//     largest=a[0];
//     for(i=0; i<10; i++)
//     {
//         if(a[i]>largest)
//         {
//             largest=a[i];
//         }
//     }
//     printf("Largest number=%d",largest);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[10][10], b[10][10], multi[10][10], r,c,i,j,k;
//     printf("Enter the number of row=\n");
//     scanf("%d",&r);
//     printf("Enter the number of column=\n");
//     scanf("%d",&c);
//     printf("Enter the first matrix\n");
//     for(i=0; i<r; i++)
//     {
//         for(j=0; j<c; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
// }

// call by value
// #include<stdio.h>
// void swap(int a,int b);
// int main()
// {
//     int a=10, b=20;
//     printf("Before swaping a=%d,b=%d\n",a,b);
//     swap(a,b);
//     printf("After swaping a=%d,b=%d\n",a,b);
// }
// void swap (int a, int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("After swaping a=%d,b=%d\n",a,b);
// }

// call by reference
// #include<stdio.h>
// void swap(int *a,int *b);
// int main()
// {
//     int a=10, b=20;
//     printf("Before swaping a=%d,b=%d\n",a,b);
//     swap(&a,&b);
//     printf("After swaping a=%d,b=%d\n",a,b);
// }
// void swap (int *a, int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("After swaping a=%d,b=%d\n",*a,*b);
// }

// #include<stdio.h>
// int main ()
// {
//     int S1,S2,S3,S4,S5,Sum,Percentage;
//     printf("Enter the value of S1,S2,S3,S4,S5");
//     scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S5);
//     Sum=S1+S2+S3+S4+S5;
//     Percentage=Sum/5;
//     printf("\n%d\n%d",Sum,Percentage);
//     if(Percentage>=90 && Percentage<=100)
//     {
//         printf("\nGrade A");
//     }
//     else if(Percentage>=80 && Percentage<90)
//     {
//         printf("\nGrade B");
//     }
//     else if(Percentage>=60 && Percentage<80)
//     {
//         printf("\nGrade C");
//     }
//     else
//     {
//         printf("\nGrade D");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char op;
//     int a,b;
//     printf("Enter Number operator and another number");
//     scanf("%d%c%d",&a,&op,&b);
//     switch (op)
//     {
//     case '+' :
//     printf("Result=%d",a+b);
//     break;
//     case '-' :
//     printf("Result=%d",a-b);
//     break;
//     case '*' :
//     printf("Result=%d",a*b);
//     break;
//     case '/' :
//     printf("Result=%d",a/b);
//     break;
//     case '%' :
//     printf("Result=%d",a%b);
//     break;
//     default :
//     printf("Enter valid operator\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     printf("Enter the Number");
//     scanf("%d",&n);
//     for(i=0; i<=n; i++)
//     {
//         sum=sum+i;
//     }
//     printf("Sum of Numbers=%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,n,fact=1;
//     printf("Enter the number");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         fact=fact*i;
//     }
//     printf("Factorial of %d is %d",n,fact);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int x,y,z,i,n;
//     x=0;
//     y=1;
//     printf("Enter the number of terms");
//     scanf("%d",&n);
//     printf("%d",y);
//     for(i=1; i<n; i++)
//     {
//         z=x+y;
//         printf("%d",z);
//         x=y;
//         y=z;
//     }
//     printf("\n");
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int n,r,reverse=0,p;
//     printf("Enter a Number");
//     scanf("%d",&n);
//     p=n;
//     while(n>0)
//     {
//         r=n%10;
//         reverse=reverse*10+r;
//         n=n/10;
//     }
//     printf("Reverse number=%d",reverse);
//     if(p==reverse)
//     {
//         printf("Palindrame");
//     }
//     else
//     {
//         printf("Not palindrome");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int r,n,c,arm=0;
//     printf("Enter any number");
//     scanf("%d",&n);
//     c=n;
//     while(n>0)
//     {
//         r=n%10;
//         arm=(r*r*r)+arm;
//         n=n/10;
//     }
//     if(c==arm)
//     {
//         printf("Armstrong number");
//     }
//     else{
//         printf("Not Armstrong number");
//     }
//     return 0;
// }

//Find the reverse of ant number
#include<stdio.h>
int main()
{
    int r,s=0,n;
    printf("Enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}
