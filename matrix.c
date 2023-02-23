//Program to add two matrixes
#include <stdio.h>
int main()
{
    int r, c;
    printf("Write the number rows:-");
    scanf("%d", &r);
    printf("Write the number of columns:-");
    scanf("%d", &c);
    int arr[r][c];
    int*ptr;
    ptr=&arr[0][0];
    for (int k = 0; k < r; k++)
    {
        for (int m = 0; m < c; m++)
        {
            printf("Write Element %d%d :-", k, m);
            scanf("%d",((ptr+k*c)+m));
        }
    }
    printf("The Matrix 1 Is:-\n");
    for (int z = 0; z < r; z++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *((ptr+z*c)+j));
        }
        printf("\n");
    }
    int r1, c1;
    printf("Write the other matrix\n");
    printf("Write the numbers of rows:");
    scanf("%d", &r1);
    printf("Write the numbers of columns:");
    scanf("%d", &c1);
    int ar[r1][c1];
    int* poi=&ar[0][0];
    for (int k = 0; k < r1; k++)
    {
        for (int m = 0; m < c1; m++)
        {
            printf("Write Element %d%d :-", k, m);
            scanf("%d",((poi+k*c1)+m) );
        }
    }
    printf("The Matrix 2 Is:-\n");
    for (int z = 0; z < r1; z++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",*((poi+z*c1)+j));
        }
        printf("\n");
    }
    int r2, c2;
    if (r1 == r && c1 == c)
    {
        r2 = r1;
        c2 = c1;
        int a[r2][c2];
        int* p=&a[0][0];
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                *((p+i*c2)+j)=*((poi+i*c2)+j)+*((ptr+i*c2)+j);
            }
        }
        printf("The Sum of Matrixes Is:-\n");
        for (int z = 0; z < r2; z++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ",*((p+z*c2)+j));
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input");
    }
}
