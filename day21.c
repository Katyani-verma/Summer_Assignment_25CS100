// Q81: Write a program to Find string length without strlen().
// #include <stdio.h>
// int main() {
//     char str[100];
//     int length = 0;
//     printf("Enter a string: ");
//     scanf(" %[^\n]s", str); 
//     while (str[length] != '\0') {
//         length++;
//     }
//     printf("Length of the string is: %d\n", length);
//     return 0;
// }

// Q82: Write a program to Reverse a string.
// #include <stdio.h>
// int main() {
//     char str[100];
//     int len = 0;
//     printf("Enter a string to reverse: ");
//     scanf(" %[^\n]s", str);
//     while (str[len] != '\0') {
//         len++;
//     }
//     int start = 0;
//     int end = len - 1;
//     while (start < end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
        
//         start++;
//         end--;
//     }
//     printf("Reversed string: %s\n", str);
//     return 0;
// }

// Q83: Write a program to Count vowels and consonants.
// #include <stdio.h>
// int main() {
//     char str[100];
//     int vowels = 0, consonants = 0;
//     printf("Enter a string: ");
//     scanf(" %[^\n]s", str);
//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//                 vowels++;
//             } else {
//                 consonants++;
//             }
//         }
//     }
//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n", consonants);
//     return 0;
// }

// Q84: Write a program to Convert lowercase to uppercase.
// #include <stdio.h>
// int main() {
//     char str[100];
//     printf("Enter a string in lowercase: ");
//     scanf(" %[^\n]s", str);
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 32;
//         }
//     }
//     printf("Uppercase string: %s\n", str);
//     return 0;
// }