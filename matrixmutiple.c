//Program to multiple two matrixes
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
    if (c==r1)
    {
        int a[r][c1];
        a[0][0]=0;
        int *p=&a[0][0];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                m=0;
                for(int k=0;k<c;k++)
                {   
                    m=m+*((ptr+(i*c))+k)*(*(poi+(k*c1)+j));
                    *((p+(i*c1))+j)=m;
                    
                } 
                
            }
            printf("\n");
        }
        printf("The Resultant Matrix Is:\n");
        for (int z = 0; z < r; z++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ",*((p+(z*c1)+j)));
            }
            printf("\n");
        }
    }
    else
    {
        printf("Not Possible");
    }
}