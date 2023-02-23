//Program to add two numbers using pionters
#include<stdio.h>
int main()
{
	int a,b,z;
	int* ptr=&a;
	int* pio=&b;
	printf("Write the first number:");
	scanf("%d",ptr);
	printf("Write the second number:");
	scanf("%d",pio);
	z=*ptr+*pio;
	printf("The sum of two number:%d\n",z);
}
