#include <stdio.h>
#include <string.h>
void reverseString(char str[], int s, int n) 
{
    if (s>= n) {
        return;
    }
    char temp = str[s];
    str[s] = str[n];
    str[n] = temp;
    reverseString(str, s + 1, n - 1);
}

int main() {
    char str[100];
    int n;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character from input

    reverseString(str, 0, n - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
