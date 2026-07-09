// Q89: Write a program to Find first non-repeating character.
// #include <stdio.h>
// int main() {
//     char str[100];
//     int freq[256] = {0};
//     printf("Enter a string: ");
//     scanf(" %[^\n]s", str);
//     for (int i = 0; str[i] != '\0'; i++) {
//         freq[(unsigned char)str[i]]++;
//     }
//     int found = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (freq[(unsigned char)str[i]] == 1) {
//             printf("First non-repeating character is: '%c'\n", str[i]);
//             found = 1;
//             break;
//         }
//     }
//     if (!found) {
//         printf("No non-repeating character found.\n");
//     }
//     return 0;
// }

// Q90: Write a program to Find first repeating character.
// #include <stdio.h>
// int main() {
//     char str[100];
//     int freq[256] = {0};
//     printf("Enter a string: ");
//     scanf(" %[^\n]s", str);
//     int found = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         unsigned char ch = str[i];
//         if (freq[ch] == 1) {
//             printf("First repeating character is: '%c'\n", str[i]);
//             found = 1;
//             break;
//         }
//         freq[ch]++;
//     }
//     if (!found) {
//         printf("No repeating character found.\n");
//     }
//     return 0;
// }

// Q91: Write a program to Check anagram strings.
// #include <stdio.h>
// int main() {
//     char str1[100], str2[100];
//     int count[256] = {0};
//     int isAnagram = 1;
//     printf("Enter first string: ");
//     scanf(" %[^\n]s", str1);
//     printf("Enter second string: ");
//     scanf(" %[^\n]s", str2);
//     for (int i = 0; str1[i] != '\0'; i++) {
//         count[(unsigned char)str1[i]]++;
//     }
//     for (int i = 0; str2[i] != '\0'; i++) {
//         count[(unsigned char)str2[i]]--;
//     }
//     for (int i = 0; i < 256; i++) {
//         if (count[i] != 0) {
//             isAnagram = 0;
//             break;
//         }
//     }
//     if (isAnagram) {
//         printf("The strings are anagrams.\n");
//     } else {
//         printf("The strings are NOT anagrams.\n");
//     }
//     return 0;
// }

// Q92: Write a program to Find maximum occurring character.
#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    int max = -1;
    char maxChar;
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (max < freq[ch]) {
            max = freq[ch];
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character is '%c', appearing %d times.\n", maxChar, max);
    return 0;
}
