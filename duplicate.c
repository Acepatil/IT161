#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Write the number of elements you want:");
    scanf("%d",&n);
    int array[n];
    int* ptr=&array[0];
    for (int z = 0; z < n; z++)
    {
        printf("Write the element %d:",z+1);
        scanf("%d",(ptr+z)); 
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n; i++)
        {
            if (*(ptr+i)==*(ptr+j))
            {
                for(int k=j;k<n-1;k++)
                {
                    *(ptr+k)=*(ptr+k+1);
                }
                n--;
                j--;
            }
            else
            {
                continue;
            }
        }
        
    }
    for (int r = 0; r <n; r++)
    {
       printf("%d",*(ptr+r));
    }
    
    
}