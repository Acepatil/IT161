//Program to write fibonacci series till n terms
#include <stdio.h>
int fib(int,int,int);
int main() 
{
    int n;
    printf("Write the number till which you want fibonacci series:-");
    scanf("%d", &n);
    printf("Fibonacci series till %d terms:",n);
    fib(n, 0, 1);
    return 0;
}
int fib(int n, int a, int b) 
{
    if (n == 0) {
        return 0;
    }
    printf("%d ", a);
    return fib(n - 1, b, a + b);
}

