// Q97: Write a program to Merge two sorted arrays.

#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter size of 1st sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d sorted elements:\n", n1);
    for(int i=0; i<n1; i++) scanf("%d", &arr1[i]);
    printf("Enter size of 2nd sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d sorted elements:\n", n2);
    for(int i=0; i<n2; i++) scanf("%d", &arr2[i]);
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n1) merged[k++] = arr1[i++];
    while (j < n2) merged[k++] = arr2[j++];
    printf("Merged sorted array:\n");
    for (k = 0; k < n1 + n2; k++) {
        printf("%d ", merged[k]);
    }
    printf("\n");
    return 0;
}

// Q98: Write a program to Find common characters in strings.

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    printf("Enter first string: ");
    scanf(" %[^\n]s", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);
    for (int i = 0; str1[i] != '\0'; i++) freq1[(unsigned char)str1[i]] = 1;
    for (int i = 0; str2[i] != '\0'; i++) freq2[(unsigned char)str2[i]] = 1;
    printf("Common characters: ");
    int found = 0;
    for (int i = 0; i < 256; i++) {
        if (i != ' ' && freq1[i] && freq2[i]) {
            printf("%c ", i);
            found = 1;
        }
    }
    if(!found) printf("None");
    printf("\n");
    return 0;
}

// Q99: Write a program to Sort names alphabetically.

#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char names[n][50], temp[50];
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]s", names[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("\nNames sorted alphabetically:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}

// Q100: Write a program to Sort words by length.

#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    char words[n][50], temp[50];
    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %d)\n", words[i], (int)strlen(words[i]));
    }
    return 0;
}