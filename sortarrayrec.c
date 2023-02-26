//Program to check if a given array is sorted in ascending order
#include <stdio.h>
int sort(int[],int n);
int main() 
{
    int n;
    printf("Write the number of elements in array:-");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
}
int sort(int a[], int n) 
{
    if (n==1) 
    {
        printf("The array is sorted");
        return 0;
    }
    if (a[0]>a[1]) 
    {
        printf("The array is not sorted");
        return 0;
    } 
    else 
    {
        return sort(a+1,n-1);
    }
}
