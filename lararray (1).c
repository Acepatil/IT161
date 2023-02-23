//Program to find the max element in an array
#include<stdio.h>
int main()
{
	int n;
	printf("write the number of elements in array:");
	scanf("%d",&n);
	int arr[n];
	int* ptr=&arr[0];
	for(int i=0;i<n;i++)
	{
		printf("Write the element %d:",i+1);
		scanf("%d",(ptr+i));
	}
	int max=0;
	for(int f=0;f<n;f++)
	{
		if(max<*(ptr+f))
		{
			max=*(ptr+f);	
		}
		else
		{
			continue;
		}
	}
	printf("%d",max);	
}
