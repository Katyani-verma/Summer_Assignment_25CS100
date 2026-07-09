// Q85: Write a program to Check palindrome string.
// #include <stdio.h>
// int main() {
//     char str[100];
//     int len = 0, isPalindrome = 1;
//     printf("Enter a string: ");
//     scanf(" %[^\n]s", str);
//     while (str[len] != '\0') {
//         len++;
//     }
//     int start = 0;
//     int end = len - 1;
//     while (start < end) {
//         if (str[start] != str[end]) {
//             isPalindrome = 0; 
//             break;
//         }
//         start++;
//         end--;
//     }
//     if (isPalindrome) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is NOT a palindrome.\n");
//     }
//     return 0;
// }

// Q86: Write a program to Count words in a sentence.
// #include <stdio.h>
// int main() {
//     char str[200];
//     int words = 0;
//     printf("Enter a sentence: ");
//     scanf(" %[^\n]s", str);
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
//             words++;
//         }
//     }
//     printf("Total number of words: %d\n", words);
//     return 0;
// }

// Q87: Write a program to Character frequency.
// #include <stdio.h>
// int main() {
//     char str[100];
//     int freq[256] = {0};
//     printf("Enter a string: ");
//     scanf(" %[^\n]s", str);
//     for (int i = 0; str[i] != '\0'; i++) {
//         freq[(unsigned char)str[i]]++;
//     }
//     printf("\nCharacter Frequencies:\n");
//     for (int i = 0; i < 256; i++) {
//         if (freq[i] > 0) {
//             printf("'%c' appears %d time(s)\n", i, freq[i]);
//         }
//     }
//     return 0;
// }

// Q88: Write a program to Remove spaces from string.
#include <stdio.h>
int main() {
    char str[100], result[100];
    int j = 0;
    printf("Enter a string with spaces: ");
    scanf(" %[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0'; 
    printf("String after removing spaces: %s\n", result);
    return 0;
}