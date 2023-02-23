//Program to make a transpose of matrix
#include <stdio.h>
int main()
{
    int r,c,m;
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
            printf("Write Element %d%d :-", k+1, m+1);
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
        printf("The Transpose Matrix Is:\n");
        int a[c][r];
        int* poi=&a[0][0];
        for (int z = 0; z <c; z++)
    {
            for (int j = 0; j <r ; j++)
            {
                *((poi+(z*r))+j)=*((ptr+(j*c))+z);
            }
    }
        for (int z = 0; z < c; z++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", *((poi+z*r)+j));
        }
        printf("\n");
    }
}
    