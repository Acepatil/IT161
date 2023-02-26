//Program to write a function to reverse a string
#include <stdio.h>
#include <string.h>
void reverse(char c[],int s,int n) 
{
    if (s>= n) 
    {
        return;
    }
    char temp = c[s];
    c[s] = c[n];
    c[n] = temp;
    reverse(c,s+1,n-1);
}

int main() {
    char c[30];
    int n;
    printf("Enter a string: ");
    fgets(c,30,stdin);
    n=strlen(c);
    c[strcspn(c,"\n")] = '\0';
    reverse(c,0,n-1);
    printf("Reversed string: %s\n",c);
    return 0;
}
