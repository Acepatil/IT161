#include <stdio.h>
#include <string.h>

// Recursive function to reverse a string
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character from input

    reverseString(str, 0, strlen(str) - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
