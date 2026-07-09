// Q93: Write a program to Check string rotation.
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1[100], str2[100], temp[200];
//     printf("Enter original string: ");
//     scanf(" %[^\n]s", str1);
//     printf("Enter string to check for rotation: ");
//     scanf(" %[^\n]s", str2);
//     if (strlen(str1) != strlen(str2)) {
//         printf("The string is NOT a rotation.\n");
//         return 0;
//     }
//     strcpy(temp, str1);
//     strcat(temp, str1);
//     if (strstr(temp, str2) != NULL) {
//         printf("The string is a valid rotation.\n");
//     } else {
//         printf("The string is NOT a rotation.\n");
//     }

//     return 0;
// }

// Q94: Write a program to Compress a string.
// #include <stdio.h>
// int main() {
//     char str[100];
//     printf("Enter a string to compress (e.g., aaabbc): ");
//     scanf(" %[^\n]s", str);
//     printf("Compressed string: ");
//     for (int i = 0; str[i] != '\0'; i++) {
//         int count = 1;
//         while (str[i] == str[i + 1]) {
//             count++;
//             i++;
//         }
//         printf("%c%d", str[i], count);
//     }
//     printf("\n");
//     return 0;
// }

// Q95: Write a program to Find longest word.
// #include <stdio.h>
// int main() {
//     char str[200], longest[50] = "", current[50];
//     int i = 0, j = 0, maxLen = 0;
//     printf("Enter a sentence: ");
//     scanf(" %[^\n]s", str);
//     while (1) {
//         if (str[i] != ' ' && str[i] != '\0') {
//             current[j++] = str[i];
//         } else {
//             current[j] = '\0';
//             if (j > maxLen) {
//                 maxLen = j;
//                 for (int k = 0; k <= j; k++) {
//                     longest[k] = current[k];
//                 }
//             }
//             j = 0;
//         }
//         if (str[i] == '\0') break;
//         i++;
//     }
//     printf("Longest word: \"%s\" (Length: %d)\n", longest, maxLen);
//     return 0;
// }

// Q96: Write a program to Remove duplicate characters.
#include <stdio.h>
int main() {
    char str[100], result[100];
    int freq[256] = {0};
    int j = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (freq[ch] == 0) {
            freq[ch] = 1;
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("String after removing duplicates: %s\n", result);
    return 0;
}