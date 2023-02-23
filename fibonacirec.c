//Program to print fibonaci series till n
#include<stdio.h>
int fib(int);
int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
}
int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}